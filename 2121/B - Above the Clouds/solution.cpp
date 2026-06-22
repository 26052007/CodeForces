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
 
        int freq[26] = {0}; 
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
 
        int flag = 0;
        for (int i = 1; i < n - 1; i++) {
            if (freq[s[i] - 'a'] > 1) {
                flag++;
                break;
            }
        }
 
 
        if(flag == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
 
    }
 
}