#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n,m,x,y;
        cin>>n>>m>>x>>y;
 
        int a[n];
        for(int i = 0 ; i < n; i++){
            cin>>a[i];
        }
 
        int b[m];
        for(int i = 0 ; i < m; i++){
            cin>>b[i];
        }
 
        int ans = n+m;
        
 
        cout << ans << endl;
 
    }
 
}