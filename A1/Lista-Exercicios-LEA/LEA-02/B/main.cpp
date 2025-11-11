#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
 
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    ull numero, cameras = 0;
    cin >> t;
    
    while (t--){
        cin >> numero;
 
        cameras |= 1ULL << numero;
    }
    cout << cameras << endl;
 
    return 0;
}