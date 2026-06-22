#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
 
   
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    
    string s = "";
 
    for (int i = 0; i < n; i++) {
        if (s == "") {
            
            s = a[i];
        } else {
            
            string front = a[i] + s;
            
            string back = s + a[i];
 
           
            if (front < back) {
                s = front;
            } else {
                s = back;
            }
        }
    }
 
    cout << s << endl;
}
 
int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}