#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        string s;
        cin>>s;
 
        int n = s.length();
        
        
 
        for(int i = 0; i < n; i++){
            if(s[n-i-1] == 'q'){
                cout << 'p';
            }
            else if(s[n-i-1] == 'p'){
                cout << 'q';
            }
            else{
                cout << s[n-i-1];
            }
            
        }
        cout << endl;
 
 
        
 
    }
}