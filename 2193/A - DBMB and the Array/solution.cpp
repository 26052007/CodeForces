#include <iostream>
#include <cmath>
 
using namespace std;
 
int main(){
 
int t;
cin>>t;
while(t--){
 
    int n,s,x;
    cin>>n>>s>>x;
 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+=arr[i];
    }
    int left = s - sum;
 
    if(sum > s){
        cout << "NO" << endl;
    }
    else{
        if(left%x == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
 
}
 
}