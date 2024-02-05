#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	deque<int> dq(10);

	for(int i = 0; i < 10; i++){
		dq[i] = i*i;
	}

	dq.push_front(14);

	for(int i = 0; i < 10; i++){
		cout << dq.at(i) << " ";
	}
	cout << endl;
 	for(auto x : dq){
		cout << x << ",";
	}

		

	return 0;
}
