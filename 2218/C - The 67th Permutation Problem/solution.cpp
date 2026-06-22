#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
 
        int smol = 1;
        int big = 3*n;
 
        for(int i = 0; i < n ; i++){
            cout << smol << " " << big-1 << " " << big << " ";
            smol++;
            big -= 2;
        }
        cout << endl;
 
    }
}