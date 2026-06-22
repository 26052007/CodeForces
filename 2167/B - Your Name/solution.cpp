#include <iostream>
 
using namespace std;
 
int main(){
 
    int q;
    cin>>q;
    while(q--){
 
        int n;
        cin>>n;
 
        string s,t;
        cin>>s>>t;
 
        int sahi = 0;
        int arr[n];
        for(int i = 0; i < n; i++){
            arr[i] = 0;
        }
 
        for(int i = 0; i < n; i++){
            
            for(int j = 0; j < n; j++){
                if(s[i] == t[j]){
                    arr[i] = 1;
                    t[j] = '0';
                    break;
                }
            }
 
        }
 
        for(int i = 0 ; i < n; i++){
            if(arr[i] == 0){
                sahi = -1;
            }
        }
 
        if(sahi != 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
 
    }
 
}