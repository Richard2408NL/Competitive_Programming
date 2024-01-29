#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <vector> // STL
#include <bitset> // STL
#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    vector<int> vR;

    while (t--)
    {
        int contador = 0;;
        int n; cin >> n; 
        string v; cin >> v;
        string vAux; cin >> vAux;

        for (int k = 0; k < n; k++){
            if(v[k] != vAux[k]){
                // Buscar intercambio
                bool flag = true;
                for (int l = k+1; l < n; l++){
                    if(v[l] == vAux[k] && v[l] != vAux[l]){
                        swap(v[k], v[l]);
                        flag = false;
                        break;
                    }
                }
                
                if(flag)
                    v[k] = vAux[k];
                
                // Cambio directo 
                contador++;

            }
            
        }

        vR.push_back(contador);

    }


    for(auto r : vR)
        cout << r << endl;
    

    return 0;
}
