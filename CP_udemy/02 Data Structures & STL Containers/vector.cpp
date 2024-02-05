#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	vector<int> v;
	v.reserve(100);

	int n; cin >> n;

	for(int i = 0 ; i < n ; i++){
		int no;
		cin >> no;
		v.push_back(no); 
		//cout << "Capacity: " << v.capacity() << " Size: " << v.size() << endl;
	}

	// Sorting
	sort(v.begin(),v.end());

	for(int aux : v){
		cout << aux << " ";
	}	

	return 0;
}