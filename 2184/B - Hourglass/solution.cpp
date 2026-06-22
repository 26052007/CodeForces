#include <iostream>
#include <algorithm>
 
using namespace std;
 
void solve() {
    long long s, k, m;
    cin >> s >> k >> m;
 
    
    long long n = m / k;
    
    long long rem = m % k;
 
    long long starting_sand;
 
    
    if (n % 2 == 0) {
        starting_sand = s;
    } 
 
    else {
        starting_sand = min(s, k);
    }
 
 
    long long result = max(0LL, starting_sand - rem);
    
    cout << result << endl;
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