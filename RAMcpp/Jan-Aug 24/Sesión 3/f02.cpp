//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve() {
  int n, q;
  cin >> n >> q;
  vector<ll> arr(n);
  
  for (ll& e : arr)
    cin >> e;


  int B = (int) pow(n, 0.4);
  vector<vector<vector<ll>>> pref; // [m][r][i] = sum of first i elements with index r mod m
  vector<vector<vector<ll>>> prog;
  
  for (int m = 0; m < B; m++) {
    pref.push_back({});
    prog.push_back({});
    for (int r = 0; r < m; r++) {
      pref[m].push_back({0});
      prog[m].push_back({0});
      for (int j = r; j < n; j += m) {
        pref[m][r].push_back(pref[m][r].back() + arr[j]);
        prog[m][r].push_back(prog[m][r].back() + arr[j]*prog[m][r].size());
      }
    }
  }
  while (q--) {
    ll s, d, k;
    cin >> s >> d >> k;
    s--;
    ll ans = 0;
    if (d < B) {
      ans = prog[d][s%d][s/d+k] - prog[d][s%d][s/d] - s/d * (pref[d][s%d][s/d+k] - pref[d][s%d][s/d]);
    } else {
      for (int i = 0; i < k; i++)
        ans += arr[s+d*i] * (i+1);
    }
    cout << ans << " ";
  }
  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) solve();
}