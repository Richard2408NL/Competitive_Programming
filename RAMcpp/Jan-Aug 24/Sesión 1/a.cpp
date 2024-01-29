// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <algorithm>
#include <iostream>
using namespace std;

void solution(int n){
	vector<int> prime(1001,0);

	for (int p = 2; p * p <= sizeof(prime)-1; p++) {
        if (prime[p] == 0) {
			for (int i = p * p; i <= sizeof(prime)-1; i += p)
                prime[i] += 1;
		}
	}
    
    vector<int> luckynum;
    for(int i = 0; i < sizeof(prime); i++){
        if(prime[i] >= 3){
            luckynum.push_back(i);
            break;
        }
    }

    cout << luckynum[n] << endl;
}

int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        solution(n);
    }

	return 0;
}
