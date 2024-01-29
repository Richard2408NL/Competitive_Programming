#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> results;
    
    for(int i = 0; i < t; i++){
        int n; cin >> n;
        
        bool up = false;
        bool down = false;
        bool right = false;
        bool left = false;

        vector<int> xV;
        vector<int> yV;
        vector<pair<int,int>> vector;
        
        while(n--){
            int x, y; cin >> x >> y;
            xV.push_back(x);
            yV.push_back(y);

            if(x != 0 && y != 0){
                vector.push_back(pair(x,y));
            }
            

            if(x > 0){
                right = true;
            } else if (x < 0) {
                left = true;
            }

            if(y > 0){
                up = true;
            } else if (x < 0) {
                down = true;
            }
        }

        //sort(vector.begin(),vector.end());
        // cout << endl;
        // for(auto l : vector){
        //     cout<< "x: " << l.first << "  y: "<< l.second << endl;
        // }


        //cout << endl;



        if(up == true && down == true && right == true && left == true){
            results.push_back("NO");
        } else {
            results.push_back("YES");
        }
    }

    for(auto l: results){
        cout << l << endl;
    }

    
    return 0;
}
