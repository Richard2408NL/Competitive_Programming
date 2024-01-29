#include <iostream>
#define IOS                           \
        ios_base::sync_with_stdio(0); \
        cin.tie(0);                   \
        cout.tie(0);
#define  endl          '\n'
using namespace std;
typedef long long ll;	
typedef unsigned long long ull;
#define pb push_back
#define int ll
signed main(){
    IOS
    ll tt;
    cin>>tt;
    while(tt--){
        int n;
        cin >> n;
        vector<int> a(n, 0), b(n, 0);
        for(int i =0 ;i < n;i ++)
            cin >> a[i] >> b[i];
 
        int f1, f2 , f3, f4;
        f1 = f2 = f3 = f4 = 1;
 
        for(int i =0 ;i < n;i ++){
            if(a[i] < 0)
                f3 = 0;
            if(a[i] > 0)
                f4 = 0;
            if(b[i] > 0)
                f1 = 0;
            if(b[i] < 0)
                f2 = 0;
        }
        if(f1 or f2 or f3 or f4)
            cout <<"YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0;
}