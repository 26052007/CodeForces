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
 
        int counter = 0;
        int target = s[n-1];
        for(int i = 0 ; i < n; i++){
            if(s[i] != target){
                counter++;
            }
        }
 
        cout << counter << endl;
 
    }
}