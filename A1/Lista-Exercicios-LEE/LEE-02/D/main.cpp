#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    queue <int>  bits;
    int t = 0, bit = 0, num;
    cin >> t >> bit;
 
    for (int i = 0; i < t; i++){
        cin >> num;
        num |= 1LL << bit;
        bits.push(num);
    }
    while (!bits.empty()){
        cout << bits.front() << endl;
        bits.pop();
    }
 
    return 0;
}