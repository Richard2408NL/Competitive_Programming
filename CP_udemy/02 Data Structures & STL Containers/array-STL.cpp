#include <bits/stdc++.h>

using namespace std;

void updateArray(array<int,6> &arr, int i, int n){
	arr[i] = n;
}

void print(const array<int, 6> &arr){
	//arr[0] = 1;

	for(int i = 0; i < arr.size() ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	array<int, 6> arr = {1,2,3,4,5,6};
	//arr[0] = 10;

	updateArray(arr, 0, 11);

	// Sort
	sort(arr.begin(), arr.end());

	// Fill
	array<int,10> fives;
	fives.fill(5); 

	for(int i = 0; i < fives.size(); i++)
		cout << fives[i] << " ";
	cout << endl;

	// For Each loop
	for(auto x : fives){
		cout << x << " ";
	}
	cout << endl;


	print(arr);

	

	return 0;
}