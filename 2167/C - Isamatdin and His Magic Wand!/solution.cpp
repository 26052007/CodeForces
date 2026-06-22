#include <bits/stdc++.h>
using namespace std;
 
int main() {
int t;
cin>>t;
while(t--){
 
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin>>arr[i];
    }
    vector<int> v(n);
    for(int i = 0; i < n ; i++){
        v[i] = arr[i];
    }
 
    
 
 
    int a = 0;
    int b = 0;
    for(int i = 0; i <n; i++){
        if(arr[i]%2 == 0){
            a++;
        }
        else{
            b++;
        }
    }
 
    sort(v.begin(), v.end());
 
 
    if(a != 0 && b!= 0){
        for(int i : v) {
            cout << i << " "; 
        }
    }
    else{
        for(int i : arr) {
            cout << i << " "; 
        }
    }
    cout << endl;
}
}