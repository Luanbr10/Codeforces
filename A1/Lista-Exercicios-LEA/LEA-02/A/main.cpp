#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, B;
    cin >> N >> B;
 
    int mascara = ~(1 << B);
 
    while (N--) {
        int V;
        cin >> V;
        
        int resultado = V & mascara;
        
        cout << resultado << endl;
    }
 
    return 0;
}