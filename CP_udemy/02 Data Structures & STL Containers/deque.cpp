#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	deque<int> first;	// empty deque of ints
	deque<int> second (4,100);	// four ints with value 100
	deque<int> third(second.begin(),second.end());	// iterating through second
	deque<int> fourth(third);	// a copy of third

	// the iterator constructor can be used to copy arrays:
	int myints[] = {16,2,77,29};
	int n = sizeof(myints) / sizeof(int);

	deque<int> fifth (myints, myints + n);

	deque<int> dq;

	// push_back
	dq.push_back(someInt);

	// remove last element from the back
	dq.pop_back();

	// push an element to the front
	dq.push_front(someInt);

	// pop an element from front
	dq.pop_front();

	// get reference to front or back elements
	dq.front();
	dq.back();

	return 0;
}