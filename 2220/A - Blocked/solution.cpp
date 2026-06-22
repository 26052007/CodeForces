#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i <n ; i++){
            cin>>arr[i];
        }
 
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(arr[j]<arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
 
        // int max = arr[0];
        // for(int i = 0; i < n ; i++){
        //     if(arr[i] > max){
        //         max = arr[i];
        //     }
        // }
 
        int flag = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i] == arr[i+1]){
                flag = 1;
            }
        }
        // h
 
        if(flag){
            cout << "-1" << endl;
        }
        else{
            for(int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }
 
    }
 
}