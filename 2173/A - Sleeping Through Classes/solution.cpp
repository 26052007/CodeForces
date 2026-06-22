#include <iostream>
 
using namespace std;
 
int main(){
 
int t;
cin>>t;
while(t--){
 
    int n,k;
    cin>>n>>k;
 
    string s;
    cin>>s;
 
 
    int counter = 0;
    int flag = 0;
    int index;
 
    int arr[n];
 
    for(int i = 0; i < n; i++){
        arr[i] = 0;
    }
 
    for(int i = 0; i<n ;i++){
        
 
        if(s[i] == '1'){
            index = i;
            if(index+k <n){
                for(int j = index; j <= index + k; j++){
                    arr[j] = 1;
                    
                }
            }
            else{
                for(int k = index; k < n; k++){
                    arr[k] = 1;
                    
                }
            }
            
        }
 
 
    }
 
    for(int i = 0 ; i < n; i++){
        if(arr[i] == 0){
            counter++;
        }
    }
    cout << counter << endl;
 
}
 
 
}