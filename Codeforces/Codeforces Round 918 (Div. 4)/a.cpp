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

    while (t--)
    {
        int a, b, c; cin >> a >> b >> c;
        if(a == b){
            cout << c << endl;
        } else if (a == c){
            cout << b << endl;
        } else if (b == c){
            cout << a << endl;
        }
    }
    
    
    return 0;
}
