// O(N^2)

#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

using namespace std;

void swap ( int *x, int *y )
{
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
}

void bubbleSort(int arr[], int n){
	int i, j; 
	bool swapped;

	for(int i = 0 ; i < n-1; i++){
		swapped = false;

		for (j = 0; j < n-i-1; j++)
		{
			if(arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}


}

int32_t main() {

#ifndef ONLINE_JUDGE
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
#endif


	int arr[5] = {6, 2, 5, 1, 7};

	bubbleSort(arr, 5);

	for(int i = 0; i < 5 ; i++)
		cout << arr[i] << " ";

	cout << endl;

		

	return 0;
}