#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
int t;
cin>>t;
while(t--){
 
    int a,b;
    cin>>a>>b;
 
    int mini = min(a,b);
    for(int i = mini ; i < INT_MAX;i++ ){
        if((i%a) == (i%b)){
            cout << i << endl;
            break;
        }
 
    }
 
 
    
}
}