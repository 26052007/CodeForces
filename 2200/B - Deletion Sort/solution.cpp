#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n ; i++){
            cin>>arr[i];
        }
 
        int b[n];
        for(int i = 0; i < n ; i++){
            b[i] = arr[i];
        }
 
 
        int flag = 0;
        for(int i = 0; i < n-1; i++){
            if(arr[i] > arr[i+1]){
                flag++;
            }
        }
 
        // int counter2 = 0;
        // for(int i = n-1; i > 1; i--){
        //     if(b[i] < b[i-1]){
        //         counter2++;
        //         b[i-1]=b[i];
        //     }
        // }
 
        if(flag > 0){
            cout << "1" << endl;
        }
        else{
            cout << n << endl;
        }
 
    }
 
}