#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int a[n+5];
        int dp[7];
        for (int i = 1; i <= 6; i++){
            dp[i] = 0;
        }
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        for (int i = 0; i < n; i++) {
            int current_val = a[i];
            int next_dp[7];
 
            for (int s = 1; s <= 6; s++) {
                int max_from_prev = 0;
                for (int prev = 1; prev <= 6; prev++) {
                    if (s != prev && s + prev != 7) {
                        if (dp[prev] > max_from_prev) {
                            max_from_prev = dp[prev];
                        }
                    }
                }
                if (current_val == s) {
                    next_dp[s] = max_from_prev + 1;
                } else {
                    next_dp[s] = max_from_prev;
                }
            }
 
            for (int s = 1; s <= 6; s++) {
                dp[s] = next_dp[s];
            }
        }
 
        int max_kept = 0;
        for (int s = 1; s <= 6; s++) {
            max_kept = max(max_kept, dp[s]);
        }
 
        cout << n - max_kept << "
";
    }
    
}