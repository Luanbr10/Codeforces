#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    double a, b, c;
    cin >> a >> b >> c;
 
    double low = 0.0;
    double high = 200000.0;
 
    for (int i = 0; i < 100; ++i) {
        double mid = low + (high - low) / 2.0;
        double val = a * mid + b * cos(mid);
        if (val < c) {
            low = mid;
        } else {
            high = mid;
        }
    }
 
    cout << fixed << setprecision(4) << high << endl;
 
    return 0;
}