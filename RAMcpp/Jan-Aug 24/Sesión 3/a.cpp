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
    vector<int> v;

    while (t--)
    {
        int xMayor = 0, xMenor = 0;
        for(int i = 0; i < 4; i++)
        {
            int x, y; cin >> x >> y;

            if (i == 1)
                xMayor = xMenor = x;

            xMayor = max(xMayor, x);
            xMenor = min(xMenor, x);
        }

        v.push_back((xMayor - xMenor)*(xMayor - xMenor));
    }
    
    for (auto l : v)
    {
        cout << l << endl;
    }
    
    
    return 0;
}
