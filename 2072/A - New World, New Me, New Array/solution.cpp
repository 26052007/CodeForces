#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n,k,p;
        cin>>n>>k>>p;
 
        int max = n*p;
 
        if(abs(k) <= max){
            if(k%p == 0){
                cout << abs(k/p) << endl;
            }
            else{
                cout << abs(k/p)+1 << endl;
            }
        }
        else{
            cout << "-1" << endl;
        }
 
    }
 
}