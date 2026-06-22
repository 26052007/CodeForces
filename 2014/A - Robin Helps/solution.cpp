#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        long long n,k;
        cin>>n>>k;
 
        long long arr[n];
        for(int i = 0; i < n ; i++){
                cin>>arr[i];
        }
 
        long long robin = 0;
        long long counter = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] >= k){
                robin += arr[i];
            }
            else{
                if(robin != 0 && arr[i] == 0){
                    robin--;
                    counter++;
                }
            }
        }
 
 
        cout << counter << endl;
 
 
 
 
    }
}