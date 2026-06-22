#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
       string s;
       cin>>s;
 
       int n = s.length();
        if (n >= 3 && s[0] == '1' && s[1] == '0' && s[2] != '0') {
            if (s.length() == 3 && s[2] < '2') {
                cout << "NO
";
            } else {
                cout << "YES
";
            }
        } 
        else {
            cout << "NO
";
        }
    }
}