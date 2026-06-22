#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int arr[7];
        for(int i = 0; i <  7; i++){
            cin>>arr[i];
        }
 
        int max = arr[0];
        int index = 0;
        for(int i = 0; i < 7; i ++){
            if(max < arr[i]){
                max = arr[i];
                index = i;
            }
        }
 
        int sum = 0;
 
        for(int i = 0; i < 7; i++){
            if(i != index){
                sum += arr[i];
            }
            else{
                continue;
            }
        }
 
        cout << -1*(sum-arr[index]) << endl;
 
 
 
    }
}