#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int x,n;
        cin>>x>>n;
 
        int hash[2] = {0};
        for(int i = 0;i < n ; i++){
            if(i%2 == 0){
                hash[0]++;
            }
            else{
                hash[1]++;
            }
        }
 
        cout << (x * hash[0])+(-1*x*hash[1]) << endl;
 
    }
 
}