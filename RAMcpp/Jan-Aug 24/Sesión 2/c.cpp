#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector> // STL
#include <bitset> // STL
#include <iostream>
using namespace std;

int main()
{
    long long n , m , k , t;    
    cin >> n >> m >> k >> t;

    vector<vector<string>> matrix(n, vector<string>(m, "0"));

    for (int i = 0; i < k; ++i)
    {
        int x, y;
        cin >> x >> y;
        matrix[x-1][y-1] = "Waste";
    }

    int cont = 0;

    for(int i = 0; i < n; ++i){
        for (int l = 0; l < m; ++l){
            if (matrix[i][l] == "Waste") 
                continue;
            else if (cont == 0){
                matrix[i][l] = "Carrots";
                cont += 1;
            } else if (cont == 1){
                matrix[i][l] = "Kiwis";
                cont += 1;
            } else if (cont == 2){
                matrix[i][l] = "Grapes";
                cont = 0;
            }   
        }
    }

    // Consultas
    vector<string> r;
    for (int j = 0; j < t; ++j)
    {
        int x, y;
        cin >> x >> y;
        r.push_back(matrix[x-1][y-1]);
    }

    for(auto i : r)
        cout << i << endl;

    return 0;
}
