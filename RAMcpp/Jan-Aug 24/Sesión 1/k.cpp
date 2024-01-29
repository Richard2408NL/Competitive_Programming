// C++ program to print all primes smaller than or equal to
// n using Sieve of Eratosthenes
#include <algorithm>
#include <iostream>
using namespace std;

void SieveOfEratosthenes(int n, bool prime[])
{
	//bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}
}

int main()
{
	int n = 30;
    bool prime[n + 1];
	SieveOfEratosthenes(n, prime);

    for(int i = 0; i < n; i++){
        
    }

	return 0;
}
