#include <bits/stdc++.h>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	stack<string> books;

	books.push("C++");
	books.push("Java");
	books.push("Python");
	books.push("OS");

	while(!books.empty()){
		cout << books.top() << endl;
		books.pop();
	}

	return 0;
}