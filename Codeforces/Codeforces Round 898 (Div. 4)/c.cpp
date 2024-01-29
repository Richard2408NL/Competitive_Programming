#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    vector<int> print;


    while(t--){
        vector<vector<char>> matrix(10);
        for(int i=0; i<10; i++){
            for (int k=0; k<10 ; k++){
                char c; cin >> c;
                matrix[i].push_back(c);
            }
        }

        int total = 0;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                if(matrix[i][j] == 'X'){
                    if(i == 0 || i == 9 || j == 0 || j == 9){
                        total += 1;
                    }
                    else if(i == 1 || i == 8 || j == 1 || j == 8){
                        total += 2;
                    }
                    else if(i == 2 || i == 7 || j== 2 || j == 7){
                        total += 3;
                    }
                    else if(i == 3 || i == 6 || j== 3 || j == 6){
                        total += 4;
                    }
                    else if(i == 4 || i == 5 || j== 4 || j == 5){
                        total += 5;
                    }
                }
            }
        }
        print.push_back(total);
    }

    for(auto l : print)
        cout << l << endl;

    return 0;
}
