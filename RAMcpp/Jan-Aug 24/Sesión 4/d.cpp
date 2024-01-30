#include <bits/stdc++.h>
using namespace std;


int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int mod(string num, int a) {
    int res = 0;

    for (int i = 0; i < num.length(); i++) {
        res = (res * 10 + (int)num[i] - '0') % a;
    }

    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a;
        string b;
        cin >> a >> b;

        if (a == 0)
            cout << b << endl;
        else {
            int mod_b = mod(b, a);
            cout << gcd(a, mod_b) << endl;
        }
    }

    return 0;
}