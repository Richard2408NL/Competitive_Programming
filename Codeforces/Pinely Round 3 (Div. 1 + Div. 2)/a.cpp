#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int t;

int main()
{
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
            

            // if(x > 0){
            //     xP = true;
            // } else if (x < 0) {
            //     xN = true;
            // }

            // if(y > 0){
            //     yP = true;
            // } else if (x < 0) {
            //     yN = true;
            // }
        }

        sort(vector.begin(),vector.end());
        // cout << endl;
        // for(auto l : vector){
        //     cout<< "x: " << l.first << "  y: "<< l.second << endl;
        // }


        //cout << endl;

        for(int a=0; a < vector.size()-1 ; a++){
            //cout << "x: " << vector[a].first<< "  x+1: " << vector[a+1].first << endl;
            //cout << "y: " << vector[a].second<< "  y+1: " << vector[a+1].second << endl;

            if(vector[a].first < vector[a+1].first){
                up = true;
            }

            if(vector[a].first > vector[a+1].first){
                down = true;
            }

            if(vector[a].second < vector[a+1].second){
                right = true;
            }

            if(vector[a].second > vector[a+1].second){
                left = true;
            }        

        }

        // int xL = 0, yL = 0;

        // for(int j=0; j<n-1; j++){ 
        //     if(xV[j] - xL > 0){
        //         left = true;
        //     }

        //     if(xV[j] - xL < 0){
        //         right = true;
        //     }

        //     if(yV[j] - yL > 0){
        //         up = true;
        //     }

        //     if(yV[j] - yL < 0){
        //         down = true;
        //     }
        // }

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
