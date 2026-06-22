#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
            int arr[5];
            for(int i = 0; i < 5; i++){
                if(i != 2){
                    cin>>arr[i];
                }
                else{
                    arr[i] = -1;
                }
                
            }
 
            int a = arr[0]+arr[1];
            int b = arr[3]-arr[1];
            int c = arr[4]-arr[3];
 
            int counter1 = 0,counter2 = 0,counter3 = 0;
            arr[2]= a;
            for(int i = 0;i <5-2; i++){
                if(arr[i+2] == arr[i]+arr[i+1]){
                    counter1++;
                }
            }
 
            arr[2]= b;
            for(int i = 0;i <5-2; i++){
                if(arr[i+2] == arr[i]+arr[i+1]){
                    counter2++;
                }
            }
 
            arr[2]= c;
            for(int i = 0;i <5-2; i++){
                if(arr[i+2] == arr[i]+arr[i+1]){
                    counter3++;
                }
            }
 
            int max = counter1;
            if(max < counter2) max = counter2;
            if(max < counter3) max = counter3;
 
            cout << max << endl;
 
            
 
    }
 
}