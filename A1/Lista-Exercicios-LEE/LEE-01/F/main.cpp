#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    long long num = 0;
 
    cin >> num;
 
    while (num != 1) {
        cout << num;
        
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = (num * 3) + 1;
        }
    }
 
    cout << num << endl;
 
    return 0;
}