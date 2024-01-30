// C++ program to demonstrate
// Basic Euclidean Algorithm

//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// Function to return
// gcd of a and b
int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

// Driver Code
int main()
{
	int a = 11, b = 9;

	// Function call
	cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b) % 1000000007
		<< endl;
	a = 35, b = 10;
	cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b)
		<< endl;
	a = 31, b = 2;
	cout << "GCD(" << a << ", " << b << ") = " << gcd(a, b)
		<< endl;
	return 0;
}
