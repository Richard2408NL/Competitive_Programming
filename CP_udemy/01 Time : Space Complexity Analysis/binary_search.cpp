// O(logN)

#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

int binary_search(int arr[], int n, int key){
	int s = 0;
	int e = n - 1;

	int mid;

	while(s<=e)
	{
		int mid = (s+e)/2;
		if(arr[mid] == key){
			return mid;
		} else if (arr[mid] > key){
			//...
			e = mid - 1;
		} else {
			s = mid + 1;
		}
	}

	return -1;
}


int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
#endif

	int arr[5] = {1, 2, 5, 7, 9};

	int x = binary_search(arr, 5, 9);

	cout << "Index: " << x << endl;

	for(int i = 0; i < 5 ; i++)
		cout << arr[i] << " ";

	cout << endl;
		

	return 0;
}