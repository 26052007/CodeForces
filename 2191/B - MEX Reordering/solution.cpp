#include <stdio.h>
#include <string.h>
 
void solve() {
    int n;
    if (scanf("%d", &n) != 1) return;
    
 
    int cnt[105];
 
    for(int i = 0; i < 105; i++) cnt[i] = 0;
    
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
 
        if (val <= 102) {
            cnt[val]++;
        }
    }
    
 
    int m = 0;
    while (cnt[m] > 0) {
        m++;
    }
    
 
    if (m == 0) {
 
        printf("NO
");
    } else if (m == 1) {
 
        if (cnt[0] == 1) {
            printf("YES
");
        } else {
            printf("NO
");
        }
    } else {
 
        printf("YES
");
    }
}
 
int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        solve();
    }
    return 0;
}