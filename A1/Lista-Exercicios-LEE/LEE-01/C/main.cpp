#include <bits/stdc++.h>
using namespace std;

string toBinary(unsigned long long n) {
    if (n == 0) {
        return "0";
    }
    string s = "";
    while (n > 0) {
        s += (n % 2 == 0 ? '0' : '1');
        n /= 2;
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned long long N;
    int B;
    while (cin >> N >> B && (N != -1 || B != -1)) {
        if (B == 2) {
            cout << toBinary(N) << "\n";
        } else if (B == 8) {
            cout << oct << N << "\n";
            cout << dec;
        } else if (B == 10) {
            cout << dec << N << "\n";
        } else if (B == 16) {
            cout << uppercase << hex << N << "\n";
            cout << dec << nouppercase;
        }
    }

    return 0;
}