#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    if(s[s.size()-2] == 'A'){
        string x = "";
        if(s[0]=='1' && s[1]=='2'){
            s[0]='0';
            s[1]='0';
        }
        for(int i=0; i<s.size()-2;i++){
            x += s[i];
        }
        return x;
    } else {
        string y = "";
        int aux = 0;
        //int r = 2;
        
        string aS = "";
        aS += s[0];
        aS += s[1];
        aux = stoi(aS);
        
        if(aux<12){
            aux+=12;
        }
        
        y += to_string(aux);
        for(int k = 2; k<s.size()-2;k++){
            y += s[k];
        }
             
        return y;
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
