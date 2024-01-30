#include <iostream>
#include <stdio.h>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

void solve(){
    int n; cin >> n;
    vector<long long> v(n);

    while(n--){
        for(auto l : v) 
            cin >> l;
        
        for(auto l : v)
            gcd

    }

}


int main()
{
    int t; cin >> t;

    while (t--){
        solve();
    }
    
    
    return 0;
}
