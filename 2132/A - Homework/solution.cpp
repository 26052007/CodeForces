#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        int n;
        cin>>n;
        string a;
        cin>>a;
        int m;
        cin>>m;
        string b;
        cin>>b;
 
        string chance;
        cin>>chance;
 
        for(int i = 0; i < m; i++){
            if(chance[i] == 'V'){
                a.insert(0, 1, b[i]); //Insert at index 0, 1 copy of 'b[i]'
                // or 
                // s = 'A' + s;
            }
            else{
                a.push_back(b[i]);
            }
        }
 
        cout << a << endl;
 
    }
 
}