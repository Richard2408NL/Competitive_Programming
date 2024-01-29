#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    vector<int> print;
    while(t--){
        int n; cin >> n;
        vector<int> numbers;
        while(n--){
            int x; cin >>x;
            numbers.push_back(x);
        }
        sort(numbers.begin(),numbers.end());
        numbers[0] += 1;
        long long total = 1;
        for(auto num : numbers){
            total *= num;
        }
        print.push_back(total);
    }

    for(auto l:print)
        cout << l << endl;
    
    
    return 0;
}
