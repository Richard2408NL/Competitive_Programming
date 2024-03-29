#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for(int i = 0; i < n ; i++) cin >> a[i];
    for(int i = 0; i < m ; i++) cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    long long ans = 0;
    int la = 0, ra = n - 1, lb = 0 , rb = m - 1;

    while (la <= ra){
        int left = abs(a[la] - b[rb]);
        int right = abs(a[ra] - b[lb]);
        if (left >= right){
            ans += left;
            la++; rb--;
        } else {
            ans += right;
            ra--; lb++;
        }
    }

    cout << ans << endl;
}

int main()
{
    int t; cin >> t;

    while(t--){
        solve();
    }
    
    return 0;
}
