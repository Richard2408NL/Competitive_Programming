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
    int t; cin >> t;
    vector<string> a;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        
        string ans = "";

        for(int i=0; i<n-1; i += 2){
            if(s[i+2] != 'a' && s[i+2] != 'e'  && s[i+3] != 'a' && s[i+3] != 'e'){
                ans = ans + s[i] + s[i+1] + s[i+2];
                i++;
            } else {
                ans = ans + s[i] + s[i+1];
            }

            if(i < n-3){
                ans += ".";
            }
        }
        a.push_back(ans);
    }

    for(auto l : a){
        cout << l << endl;
    }
    
    return 0;
}
