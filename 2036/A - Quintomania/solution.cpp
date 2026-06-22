#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
 
        int flag = 0;
        for(int i = 0; i <n-1; i++){
            if (abs(arr[i] - arr[i+1]) != 5 && abs(arr[i] - arr[i+1]) != 7) {
                flag = 1;
            }
        }
 
        if(flag == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
 
    }
 
}