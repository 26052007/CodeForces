#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin >> t;
    while(t--){
 
        int n;
        cin>>n;
        string s;
        cin>>s;
 
        int counter = 0;
        int flag = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                flag = 1;
            }
            if(flag == 1){
                if((s[i] == '0' && s[i+1] == '1') || (s[i] == '1' && s[i+1] == '0')){
                    counter++;
                }   
            }
            else{
                continue;
            }
        }
 
        if(flag == 1){
            cout << counter +1 << endl;
        }
        else{
            cout << "0" << endl;
        }
    }
 
}