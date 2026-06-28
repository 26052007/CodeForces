#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
 
    int l = 0;
    int r = n-1;
    while(l < r){
        if(s[l] != s[r]){
            l++;
            r--;
        }
        else{
            break;
        }
    }
    int ans = n - (l*2);
    if( ans <= 0) cout << 0 << endl;
    else cout << ans << endl;
}
 
int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}