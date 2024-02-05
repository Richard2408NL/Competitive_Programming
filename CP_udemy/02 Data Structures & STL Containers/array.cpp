#include <bits/stdc++.h>

using namespace std;

void updataData(int arr[], int i, int x){
	arr[i] = x;
}

void print(int arr[], int n){
	for(int i = 0; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

void size_array(int arr[]){
	cout << "Array Size in funtion: " << sizeof(arr) << endl;
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int arr[] = {1,7,3,4,5}; // Init list
	int n = sizeof(arr)/sizeof(int);


	// Prin array size in main
	// cout << "Array size in main: " << sizeof(arr) << endl;


	// Print array size in function
	// size_array(arr);

	// print base address
	// cout << arr << endl;

	// actual array is update
	// updataData(arr, 1, 8);

	// Sort
	sort(arr,arr + n);

	print(arr,n);

	// for(int i=0; i < n; i++){
	// 	cout << arr[i] << " ";
	// }


	return 0;
}