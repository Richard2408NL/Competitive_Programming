#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    while(t--){
        long long messages, charge, unit, onOff;
        cin >> messages >> charge >> unit >> onOff;
        vector<long long> messagesSent;
        for(int i = 0; i<messages; i++){
            long long message;
            cin >> message;
            messagesSent.push_back(message);
        }
        for(int i = 0; i<messagesSent.size(); i++){
            if(i == 0){
                if(messagesSent[i]*unit >= onOff){
                charge -= onOff;
                } else {
                    charge -= messagesSent[i]*unit;
                }
            } else {
                if((messagesSent[i]-messagesSent[i-1])*unit >= onOff){
                    charge -= onOff;
                } else {
                    charge -= (messagesSent[i]-messagesSent[i-1])*unit;
                }
            }
            if(charge <= 0){
                ans.push_back("NO");
                break;
            }
            if(i == messagesSent.size()-1 && charge > 0){
                ans.push_back("YES");
            }
        }
    }
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}