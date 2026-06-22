#include <iostream>
 
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int l,a,b;
        cin>>l>>a>>b;
 
        int arr[l];
 
        for(int i = 0; i < l; i++){
            arr[i] = i;
        }
 
        // int p = 5000;
 
        // while(p--){
            
        // }
 
        int max = 0;
 
        for(int i = 0; i < 5000; i++){
            if(max < arr[(a+(i*b))%l]){
                max = arr[(a+(i*b))%l];
            }
        }
 
        cout << max << endl;
 
    }
 
}