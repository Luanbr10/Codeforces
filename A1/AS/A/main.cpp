#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    ull a, b;
    while (t--)
    {
        cin >> a >> b;
 
        if (a == b){
            ull OR = a|b;
            ull res_igual = __builtin_popcountll(OR);
            cout << res_igual << endl;
        }
        else{
        ull AND = a&b;
        ull resultado = __builtin_popcountll(AND);
 
        cout << resultado << endl;
        }
    }
    return 0;
}