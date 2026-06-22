#include <iostream>
 
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
    while(t--){
 
        string s;
        cin>>s;
 
        int n = s.length();
 
        s[n-2] = 'i';
        s[n-1] = ' ';
 
        cout << s << endl;
 
    }
 
}