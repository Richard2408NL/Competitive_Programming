#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t; cin >> t;
    vector<vector<int>> m;
    
    for(int i=0; i<t;i++){
        // Guardamos cada dato
        int n; cin >> n;
        int k; cin >> k;
        
        // Agremos un vector a la matriz
        vector<int> a;
        m.push_back(a);
 
        // Resolvemos
        for(int l = n; l >= 1; l--){
            m[i].push_back(l);
        }
 
        int inicio = (m[i].size()-1) - k;
        int fin = m[i].size()-1;
 
        while (inicio < fin) {
            swap(m[i][inicio], m[i][fin]);
            inicio++;
            fin--;
        }
    }
    
    // Imprimimo
    for(auto l : m){
        for(auto x : l){
            cout << x << " ";
        }
        cout << endl;
    }
 
    return 0;
}