// O(N logN )

#include <bits/stdc++.h>

//#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

void mergeSort(vector<int> arr, int s , int e)
{
	// base case
	if(s>=e)
		return;

	int mid = (s+e)/2;
	mergeSort(arr, s, mid);
	mergeSort(arr, mid+1, e);
	return mergeSort(arr, s, e);
}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
#endif

	return 0;
}