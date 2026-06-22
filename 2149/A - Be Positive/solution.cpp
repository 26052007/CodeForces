#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
 
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin>>v[i];
        }
 
        int counter_0 = 0;
        int counter_1 = 0;
 
        for(int i =0; i < n; i++){
            if(v[i] == 0){
                counter_0++;
            }
            if(v[i] == -1){
                counter_1++;
            }
        }
 
        int ans = 0;
 
            if(counter_1%2 != 0){
                ans+=2;
            }
 
        cout << ans + (counter_0) << endl;
 
    }   
}