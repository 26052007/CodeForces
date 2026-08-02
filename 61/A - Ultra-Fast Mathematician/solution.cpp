    #include <iostream>
    #include <vector>
    #include <algorithm>
    #include <string>
 
    using namespace std;
 
    void solve() {
        string a,b;
        cin>>a>>b;
        string ans = "";
        for(int i = 0; i < a.length(); i++){
            if(a[i]==b[i]){
                ans+="0";
            }
            else{
                ans+="1";
            }
        }
 
 
        cout << ans << endl;
    }
 
    int main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        // int t;
        // cin >> t;
        // while (t--) {
            solve();
        // }
        return 0;
    }