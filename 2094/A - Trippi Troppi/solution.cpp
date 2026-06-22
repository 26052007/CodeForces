#include <iostream>
using namespace std;
#include <string>
 
int main(){
 
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
 
        
        string s;
        getline(cin,s);
 
        int n = s.length();
 
        string a[3];
        a[0] = s[0];
        int index = 1;
 
        for(int i = 0; i < n; i++){
            if(s[i] == ' '){
                a[index] = s[i+1];
                index++;
            }
        }
 
        for(int i = 0; i<3; i++){
            cout << a[i] ;
        }
        cout << endl;
 
    }
 
}