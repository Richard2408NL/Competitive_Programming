// O(N)

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

    vector<int> v = { 7, 2, 8, 4, 5 };

	mergeSort(v, 0, v.size()-1);

	for(int i = 0; i < 5 ; i++)
		cout << v[i] << " ";

	cout << endl;
	
	return 0;
}