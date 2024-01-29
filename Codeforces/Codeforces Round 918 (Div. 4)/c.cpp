#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
    long long t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector<long long> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int ans = 0;
        for(auto l : a){
            ans += l;
        }
        
        if(sqrt(ans) == floor(sqrt(ans))){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
