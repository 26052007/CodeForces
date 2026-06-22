#include <iostream>
#include <math.h>
 
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
 
        int arr[n];
        int counter = 0;
        for(int i = 0; i < n;i++){
            arr[i] = (i+1)*(i+1);
        }
 
        for(int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
 
    }
 
}