#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int C;
    cin >> C;
    while (C--) {
        int N;
        cin >> N;
        if (N > 100) {
            cout << N - 10 << "\n";
        } else {
            cout << 91 << "\n";
        }
    }

    return 0;
}