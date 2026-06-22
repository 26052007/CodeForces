#include <iostream>
 
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
    cin >> a >> b;
 
    long long odd_sum = 0;
    long long even_sum = 0;
    int max_layers = 0;
 
    for (int n = 1; n <= 30; n++) {
        
        long long current_layer_size = 1LL << (n - 1);
 
        if (n % 2 != 0) {
            odd_sum += current_layer_size;
        } else {
            even_sum += current_layer_size;
        }
 
        bool possible1 = (odd_sum <= a && even_sum <= b);
        bool possible2 = (odd_sum <= b && even_sum <= a);
 
        if (possible1 || possible2) {
            max_layers = n;
        } else {
            break;
        }
    }
 
    cout << max_layers << endl;
    }
    return 0;
}