#include <bits/stdc++.h>
using namespace std;

#define ll long long int

void solve(){
    ll n; cin >> n; 
    string s; cin >> s;

    unordered_map<char, int> timeRequired, timeSpent;
    for (char ch = 'A'; ch <= 'Z'; ++ch) {
        timeRequired[ch] = ch - 'A' + 1;
    }

    int solved = 0;
    for (char problem : s) {
        //timeSpent[problem] += 1;
        if (++timeSpent[problem] == timeRequired[problem]) {
            solved++;
        }
    }

    cout << solved << endl;
}

int main()
{
    ll t; cin >> t;

    while(t--) 
        solve();
    
    
    return 0;
}
