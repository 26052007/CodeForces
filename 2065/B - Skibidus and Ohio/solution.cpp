#include <iostream>
 
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        string s;
        cin>>s;
 
        int counter = 0;
 
        int n = s.length();
 
        for(int i = 0; i < n-1; i++ ){
            if(s[i] == s[i+1]){
                counter++;
            }
        }
 
        if(counter != 0){
            cout << "1" << endl;
        }
        else{
            cout << n << endl;
        }
 
    }
 
}