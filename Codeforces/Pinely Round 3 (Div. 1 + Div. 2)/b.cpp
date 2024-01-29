#include <stdc.h>

#include <iostream>
using namespace std;

long long solution(vector<long long>& list){
    if(list[list.size()-1] != list[list.size()-2] && list.size() == 2) {
        return 10e18;
    }

    return 0;
}

int main()
{
    int t; cin >> t;

    while(t--){
        long long n; cin >> n;
        vector<int> list(n);
        while(n--){
            long long a; cin >> a;
            list.push_back(a);
        }

    }
    
    
    return 0;
}
