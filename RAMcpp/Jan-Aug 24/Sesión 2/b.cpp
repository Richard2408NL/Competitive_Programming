// // /* Iterative Function to calculate (x^y)%p in O(log y) */
// // #include <iostream>
// // using namespace std;

// // long long power(long long x, long long y, long long p)
// // {

// // 	// Initialize answer
// // 	long long res = 1;

// // 	// Check till the number becomes zero
// // 	while (y > 0) {

// // 		// If y is odd, multiply x with result
// // 		if (y % 2 == 1)
// // 			res = (res * x);

// // 		// y = y/2
// // 		y = y >> 1;

// // 		// Change x to x^2
// // 		x = (x * x);
// // 	}
// // 	return res % p;
// // }

// // int main()
// // {
// // 	int t; cin >> t;
// //     while(t--){
// //         long long a, b, c = 1000000007;
// //         cin >> a >> b;
// //         cout << power(a, b, c) << endl;
// //     }
    
// //     return 0;
// // }

// // 5
// // 3 2
// // 4 5
// // 7 4
// // 34534985349875439875439875349875 93475349759384754395743975349573495
// // 34543987529435983745230948023948 3498573497543987543985743989120393097595572309482304

// // This code is contributed by yaswanth0412


#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector> // STL
#include <bitset> // STL
#include <iostream>
using namespace std;

/* this function calculates (a*b)%c taking into account that a*b might overflow */
long long mod(long long a,long long b,long long c){
    if (b == 0)
        return 1;
    else if (b%2 == 0){
        long long y = mod(a,b/2,c);
        return (y*y)%c;
    } 
    else {
        return ( (a%c) * mod(a,b-1,c) ) % c;
    }
}

    
int main()
{        
    long long unsigned a , b, c = 1000000007;
    cin >> a >> b;

    cout << mod(a, b, c) << endl;

    return 0;
}

// -----------------------------------------------------------------

// // Modular Exponentiation (Power in Modular Aritmetic) (x^y)
// #include <cstdlib>
// #include <iostream>
// #include <algorithm>
// #include <vector> // STL
// #include <bitset> // STL
// #include <iostream>
// using namespace std;
// #define M 100000007

// int main ()
// {
// 	long long int x , y, res=1;
// 	cin >> x >> y;
// 	x = x%M;
// 	while (y > 0) {
// 		if (y%2) 
// 			res = (res*x)%M;
// 		y = y/2;
// 		x= (x*x)%M; 
// 	}
// 	cout << res << endl;

// 	return 0;
// }