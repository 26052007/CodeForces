#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        long long x,k;
        cin>>x>>k;
 
        int isprime = 1;
 
        if(x == 1 && k == 2){
            cout << "YES" << endl;
        }
        else if(x <= 1 || k != 1){
            cout << "NO" << endl;
        }
        else{
            for(int i = 2; i <= sqrt(x); i++){
                if(x%i == 0){
                    isprime = 0;
                    break;
                }
            }
            if(isprime == 1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
 
    }
 
}