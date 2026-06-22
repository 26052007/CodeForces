#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        int newYear = 0;
        int past = 0;
 
        for(int i = 0; i < n; i++){
            if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '6'){
                newYear++;
            }
            if(s[i] == '2' && s[i+1] == '0' && s[i+2] == '2' && s[i+3] == '5'){
                past++;
            }
        }
 
        if(newYear != 0){
            cout << "0" << endl;
        }
        else if(past != 0 && newYear == 0){
            cout << "1" << endl;
        }
        else if( past == 0 && newYear == 0){
            cout << "0" << endl;
        }
 
    }
 
}