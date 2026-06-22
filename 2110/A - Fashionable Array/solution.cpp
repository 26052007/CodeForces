#include <bits/stdc++.h>
using namespace std;
 
 
 
 
int main() {
    int t;
    cin >> t;
    while (t--) {
 
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }
 
        for(int i = 0; i < n-1 ; i++){
            for(int j = 0; j < n-i-1; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
 
 
        // for(int i = 0; i < n ; i++){
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
 
        int counter1 = 0;
        int counter2 = 0;
        
 
        int min1 = arr[0];
        int max1 = arr[n-1];
        
        for(int i = 1;i < n; i++){
 
            if((min1+max1)%2 == 0){
                break;
            }
            else{
                min1 = arr[i];
                counter1++;
            }
 
         }  
 
        int min2 = arr[0];
        int max2 = arr[n-1];
        
 
       
         for(int i = 1;i < n; i++){
 
            if((min2+max2)%2 == 0){
                break;
            }
            else{
                max2 = arr[n-i-1];
                counter2++;
            }
 
         }   
            
       
 
 
        if(counter1 > counter2){
            cout << counter2 << endl;
        }
        else{
            cout << counter1 << endl;
        }
 
 
 
 
 
 
    }
}