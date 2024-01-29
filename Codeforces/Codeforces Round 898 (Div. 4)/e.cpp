#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

const int INF = int(1e9) + 5;

int main()
{
    int t; cin >> t; 
    vector<int> print;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> coral(n);

        for(int i=0; i<n ; i++){
            int r; cin >> r; coral.push_back(r);
        }

        // for(auto &a : coral)
        //     cin >> a;

        auto works = [&](int h) -> bool {
            int sum = 0;
            for(auto &a : coral)
                if(a < h)
                    sum +=  h - a;
                
            return sum <= x;
        };

        int low = 0, high = 2 * INF;

        while(low < high){
            int mid = low + (high - low + 1 )/2;

            if(works(mid)){
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        print.push_back(low);
    }

    for(auto l : print)
        cout << l << endl;
    
    return 0;
}
