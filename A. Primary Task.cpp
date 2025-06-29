
 //"Success is not a Destination,It's a Journey."

/*********************************************
 **  @Author:  PRASANJIT ROY                **
 **  @Category:                             **
/*********************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        if(s.size()>=3 && s.substr(0,2)=="10" && stoi(s.substr(2))>=2  && s[2]!='0'){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
    return 0;
}




