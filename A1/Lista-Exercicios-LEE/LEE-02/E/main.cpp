#include <bits/stdc++.h>
using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    while (N--) {
        long long V;
        cin >> V;

        int bits_ativos = __builtin_popcountll(V);

        if (ehPrimo(bits_ativos)) {
            cout << V << " eh um pribit\n";
        } else {
            cout << V << " nao eh um pribit\n";
        }
    }

    return 0;
}