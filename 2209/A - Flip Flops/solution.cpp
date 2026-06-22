#include <bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t;
    cin>>t;
    while(t--){
 
        long long n,c,k;
        cin>>n>>c>>k;
 
        long long arr[n];
        for(long long i = 0;i <n ; i++){
            cin>>arr[i];
        }
 
        sort(arr,arr+n);
 
 
        for(long long i = 0 ; i < n; i++){
            if(arr[i]<=c){
                if(k-(c-arr[i]) > 0){
                    k -= c-arr[i];
                    c += c;
                }
                else{
                    c += k + arr[i];
                    k = 0;
                }
            }
        }
 
        cout << c << endl;
 
    }
 
}