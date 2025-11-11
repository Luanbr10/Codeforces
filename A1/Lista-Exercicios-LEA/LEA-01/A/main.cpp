#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int D;
    while (cin >> D && D != -1) {
        string N;
        cin >> N;
        long long sum_even = 0;
        long long sum_odd = 0;
        for (int i = 0; i < N.length(); ++i) {
            int digit = N[i] - '0';
            if (i % 2 == 0) {
                sum_even += digit;
            } else {
                sum_odd += digit;
            }
        }
        long long result = sum_even - sum_odd;
        cout << N << ": " << sum_even << " - " << sum_odd << " = " << result << " - ";
        if (result % 11 == 0) {
            cout << "sim" << "\n";
        } else {
            cout << "nao" << "\n";
        }
    }

    return 0;
}