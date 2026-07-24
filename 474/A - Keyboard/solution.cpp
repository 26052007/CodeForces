#include <iostream>
#include <vector>
 
using namespace std;
 
void solve() {
    
    char a;
    cin>>a;
    string s;
    cin>>s;
    int n = s.length();
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
 
    string ans = "";
    if(a == 'R'){
        for(int i = 0; i < n; i++){
           
                int j = 0;
                while(s1[j] != s[i]){
                    j++;
                }
                ans += s1[j-1];
        }
    }
    else{
        for(int i = 0; i < n; i++){
                int j = 0;
                while(s1[j] != s[i]){
                    j++;
                }
                ans += s1[j+1];
        }
    }
 
 
    cout << ans << endl;
    
 
}
 
int main() {
        solve();
    return 0;
}