#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
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
        int V;
        cin >> V;
        cout << "o numero " << V;
        if (isPrime(V)) {
            cout << " eh primo\n";
        } else {
            cout << " nao eh primo\n";
        }
    }

    return 0;
}