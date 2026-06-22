#include <iostream>
#include <string>
#include <vector>
 
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long c = 1;
    
    while (n > 5 * c) {
        n -= 5 * c;
        c *= 2;
    }
    
    cout << names[(n - 1) / c] << "
";
    
    return 0;
}