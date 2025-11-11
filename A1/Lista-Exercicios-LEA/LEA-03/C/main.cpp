#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int c;
    long long k;
    cin >> c >> k;
 
    vector<long long> t(c);
    for (int i = 0; i < c; ++i) {
        cin >> t[i];
    }
 
    int left = 0;
    for (int right = 0; right < c; ++right) {
        long long limite_inferior = t[right] - k;
 
        while (t[left] < limite_inferior) {
            left++;
        }
 
        if (right > 0) {
            cout << " ";
        }
        cout << (right - left + 1);
    }
    cout << endl;
 
    return 0;
}