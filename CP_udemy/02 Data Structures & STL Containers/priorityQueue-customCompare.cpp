#include <bits/stdc++.h>

using namespace std;

class Compare {
public:
	bool operator()(int a, int b){
		return a < b;
	}
};


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int arr[] = {10,15,20,13,6,90};
	int n = sizeof(arr) / sizeof(int);

	// priority_queue<int> heap; // MinHeap
	priority_queue<int, vector<int> , Compare > heap; 

	for(int x : arr){
		heap.push(x);
	}

	while(!heap.empty()){
		cout << heap.top() << endl;
		heap.pop();
	}


	return 0;
}