#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t; cin >> t;
    vector<string> print;
    while(t--){
        string card;
        cin >> card;

        if(card[0] == 'a' || card[1] == 'b' || card[2] == 'c'){
            print.push_back("YES");
        } else {
            print.push_back("NO");
        }
    }

    for(auto l : print){
        cout << l << endl;
    }
    
    system("pause");
    return 0;
}
