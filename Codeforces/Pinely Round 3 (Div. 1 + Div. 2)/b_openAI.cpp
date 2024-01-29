#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Sort the array in ascending order
        sort(a.begin(), a.end());

        // Choose k to be the difference between the two largest elements
        long long k = a[n - 1] - a[n - 2];

        cout << k << endl;
    }

    return 0;
}
