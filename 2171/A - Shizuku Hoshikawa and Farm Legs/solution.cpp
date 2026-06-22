#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
 
        int left = n;
        int counter = 0;
 
        int cows = n/4;
        
 
        if(n%2 == 0){
        while(cows >=0){
            counter++;
            cows--;
        }
 
        cout << counter << endl;
    }
    else{
        cout << "0" << endl;
    }
 
    }
 
}