#include <iostream>
using namespace std;
 
int main(){
 
int t;
    
    cin >> t;
    while(t--){
 
    int n;
    cin >> n;
    int a=0;
 
 
    int arr[n];
 
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
 
    int temporary;
    for(int i = 0; i < n-1; i++){
    for(int j = 0; j < (n-i-1); j++){
        if(arr[j]>arr[j+1]){
            temporary = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temporary;
        }
    }
}
 
   
    for(int i = 1; i < n-1; i+=2){
        if(arr[i]!=arr[i+1]){
            a = 1;
        }
    }
 
    if(a==1){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    cout << "
";
}
 
 
    return 0;
}