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
 
        int a =0;
        int b = 0;
 
        for(int i = 0; i < n; i++){
            if(arr[i] == 1){
                a++;
            }
            if(arr[i] == 67){
                b++;
            }
        }
 
        if(a!=0 && b!= 0){
            cout << "YES" << endl;
        }
        else if(b!=0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
 
    }
 
 
}