#include <bits/stdc++.h>
#include <string.h>
 
using namespace std;
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        string s;
        cin>>s;
 
        int n = s.length();
        int counter = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                counter++;
            }
        }
        int peeche = 0;
        int k = n-1;
            while(s[k] == '0'){
                peeche++;
                k--;
            }
        
        int ans;
        if(peeche == 0){
            ans = n - counter -1;
        }
        else{
            ans = n - counter + peeche -1;
        }
 
 
        cout << ans << endl;
 
 
    }
 
}