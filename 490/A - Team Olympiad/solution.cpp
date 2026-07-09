#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    if (!(cin >> n)) return 0;
    
    vector<int> t1, t2, t3;
    for (int i = 1; i <= n; ++i) {
        int t;
        cin >> t;
        if (t == 1) t1.push_back(i);
        else if (t == 2) t2.push_back(i);
        else if (t == 3) t3.push_back(i);
    }
    
    int w = min({t1.size(), t2.size(), t3.size()});
    
    cout << w << "
";
    for (int i = 0; i < w; ++i) {
        cout << t1[i] << " " << t2[i] << " " << t3[i] << "
";
    }
    
    return 0;
}