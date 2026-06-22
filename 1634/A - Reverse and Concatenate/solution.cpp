#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n,k;
        cin>>n>>k;
 
        string s;
        cin>>s;
 
        int bhav = 0;
 
        for(int i = 0; i <n ; i++){
            if(s[i] != s[n-i-1]){
                bhav++;
            }
        }
 
 
        if(bhav == 0 || k == 0){
            cout << "1" << endl;;
        }
        else{
            cout << "2" << endl;
        }
 
 
    }
}