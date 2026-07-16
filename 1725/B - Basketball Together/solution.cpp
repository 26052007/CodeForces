#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n, d;
    if (!(cin >> n >> d)) return 0;
    
    vector<long long> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    
    sort(p.begin(), p.end());
    
    int wins = 0;
    int left = 0;
    int right = n - 1;
    
    while (left <= right) {
        long long needed = d / p[right] + 1;
        
        if (right - left + 1 >= needed) {
            wins++;
            left += (needed - 1);
            right--;
        } else {
            break;
        }
    }
    
    cout << wins << "
";
    
    return 0;
}