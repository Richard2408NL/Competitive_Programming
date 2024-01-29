// //Code is like humour. When you have to explain it, it’s bad. //
 
// //Author - royboylab
 
// //#include <bits/stdc++.h>
// #include <algorithm>
// #include <iostream>
// #include <vector>
// using namespace std;
 
// #define int long long int
// #define all(v) v.begin(),v.end()
 
// bool isx(vector<int> v,int h,int x){
//     for(int i=0;i<v.size();i++){
//         if(v[i]<h){
//             int k = h-v[i];
//             x-=k;
//         }
//     }
//     return x>=0;
// }   
 
// signed main()
// {   
 
//     int T = 1;cin >> T;
//     while (T--)
//     {
//         int n,x;cin>>n>>x;
 
//         vector<int> v(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin>>v[i];
//         }
//         long long lo = 1, hi = 3e9 , mid;
//         while(hi-lo>1){
//             mid = (hi+lo)/2;
//             if(isx(v,mid,x))lo=mid;
//             else hi = mid-1;
//         }
 
//         if(isx(v,hi,x))cout<<hi;
//         else cout<<lo; 
//         cout<<endl;
//         }
// }

//#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
namespace Slongod{
using ll = long long;
const int N = 2e5+7;
int n , k , a[N];
bool check(int mid)
{
    ll t = 0;
    for (int i = 1; i <= n; i++) {
        t += max(mid - a[i] , 0);
    } return t <= k;
}
int main()
{
    int T; cin >> T;
    while(T--){
        cin >> n >> k;
        for (int i = 1; i <= n; i++){cin >> a[i];}
        int l = 1 , r = 2e9 , ans = 0;
        while(l <= r) {
            int mid = (r - l) / 2 + l;
            if (check(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
}
int main()
{
    ios :: sync_with_stdio(0);
    cin.tie(0) , cout.tie(0);
    return Slongod :: main();
}