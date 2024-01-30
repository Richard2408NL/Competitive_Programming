// C++ program to demonstrate working of 
// extended Euclidean Algorithm 
#include<iostream>
#include<algorithm>
#include <math.h>

using namespace std;

long long numMax = 1000000007;

long long gcd(long long a, long long b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}


template <typename T>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

void solve(){

    long long a, b, n;
    cin >> a >> b >> n;

    long long ans = gcd( (modpow(a,n,numMax) + modpow(a,n,numMax)) , abs(a-b));

    cout << ans % numMax << endl;
}

int main() 
{ 
	int t; cin >> t;

    while(t--){
        solve();
    }

	return 0; 
} 

