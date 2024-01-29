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
    vector<vector<long long>> vR;

    while (t--)
    {
        long long n , q; 
        cin >> n >> q;
        vector<long long> array(n);

        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }

        vector<long long> vR1;
        
        for (int i = 0; i < q; i++)
        {

            long long s , d , k;
            cin >> s >> d >> k;

            long long sum = 0;

            int index = 1;
            for (int i = s-1 ; index <= k; i += d)
            {
                sum += (array[i] * index);
                index++;
            }

            vR1.push_back(sum);
        }

        vR.push_back(vR1);

    }


    for (auto i : vR)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    

    return 0;
}
