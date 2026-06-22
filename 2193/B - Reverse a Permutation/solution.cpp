#include <iostream>
#include <algorithm>
 
using namespace std;
 
const int MAXN = 200005;
int p[MAXN];
int pos[MAXN];
 
int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int n;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        pos[p[i]] = i;
    }
 
    int current_max = n;
 
    for (int i = 0; i < n; i++) {
        while (pos[current_max] < i) {
            current_max--;
        }
 
        if (p[i] == current_max) {
            continue;
        }
 
        int l = i;
        int r = pos[current_max];
        
        reverse(p + l, p + r + 1);
        break;
    }
 
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
    }
    return 0;
}