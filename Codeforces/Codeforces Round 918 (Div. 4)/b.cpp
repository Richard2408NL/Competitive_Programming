#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cstdio>

using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        vector<vector<char>> matrix(3);
        int fila = -1, columna = -1;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                char s; cin >> s;
                matrix[i].push_back(s);
                if(matrix[i][j] == '?'){
                    fila = i;
                    columna = j;
                }
            }
        }

        // You are given a Latin square, but one of the letters was replaced with a question mark ?. Find the letter that was replaced.
        if(columna == 0){
            if (matrix[fila][1] == 'A' && matrix[fila][2] == 'B' || matrix[fila][1] == 'B' && matrix[fila][2] == 'A'){
                cout << 'C' << endl;
            } else if (matrix[fila][1] == 'B' && matrix[fila][2] == 'C' || matrix[fila][1] == 'C' && matrix[fila][2] == 'B'){
                cout << 'A' << endl;
            } else if (matrix[fila][1] == 'A' && matrix[fila][2] == 'C' || matrix[fila][1] == 'C' && matrix[fila][2] == 'A'){
                cout << 'B' << endl;
            }
        } else if (columna == 1) {
            if (matrix[fila][0] == 'A' && matrix[fila][2] == 'B' || matrix[fila][0] == 'B' && matrix[fila][2] == 'A'){
                cout << 'C' << endl;
            } else if (matrix[fila][0] == 'B' && matrix[fila][2] == 'C' || matrix[fila][0] == 'C' && matrix[fila][2] == 'B'){
                cout << 'A' << endl;
            } else if (matrix[fila][0] == 'A' && matrix[fila][2] == 'C' || matrix[fila][0] == 'C' && matrix[fila][2] == 'A'){
                cout << 'B' << endl;
            }
        } else if (columna == 2) {
            if (matrix[fila][0] == 'A' && matrix[fila][1] == 'B' || matrix[fila][0] == 'B' && matrix[fila][1] == 'A'){
                cout << 'C' << endl;
            } else if (matrix[fila][0] == 'B' && matrix[fila][1] == 'C' || matrix[fila][0] == 'C' && matrix[fila][1] == 'B'){
                cout << 'A' << endl;
            } else if (matrix[fila][0] == 'A' && matrix[fila][1] == 'C' || matrix[fila][0] == 'C' && matrix[fila][1] == 'A'){
                cout << 'B' << endl;
            }
        }
    }
    
    return 0;
}
