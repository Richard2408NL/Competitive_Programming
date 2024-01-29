#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    vector<int> print;
    while(t--){
        int n, k; cin >> n >> k;
        string hoja; cin >> hoja;

        int reps = 0;

        for(int j = 0; j < n; j++ ){
            if(hoja[j] == 'B'){
                int x = 0;
                while(x < k && x+j < n){
                    hoja[x+j] = 'W';
                    x++;
                }
                reps++;
            }
        }
        print.push_back(reps);

    }
    
    for(auto p : print)
        cout << p << endl;
    
    return 0;
}
