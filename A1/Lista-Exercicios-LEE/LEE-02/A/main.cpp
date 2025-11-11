#include <bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ull x = 0, y = 0, XOR, res;
    int t;
    cin >> t;
    
    while (t--){
        cin >> x >> y;
        XOR = x^y;
        cout << __builtin_popcountll(XOR) << endl;
 
    }
 
    return 0;
}