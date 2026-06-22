#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
int t;
cin>>t;
while(t--){
 
    string s;
    cin>>s;
 
    int n = s.length();
 
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'Y'){
            flag++;
        }
    }
 
    if(flag > 1){
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;
 
}
 
}