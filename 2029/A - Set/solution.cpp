#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long l,r,k;
        cin>>l>>r>>k;
        
        long long max = r/ k;
 
        if(max < l){
            cout << 0 << endl;
        } 
        else {
            cout << max - l + 1 << endl;
        }
    }
}