#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    priority_queue<long long, vector<long long>, greater<long long>> cabos;

    for (int i = 0; i < n; i++) {
        long long c;
        cin >> c;
        cabos.push(c);
    }

    long long total_cost = 0;

    while (cabos.size() > 1) {
        long long cabo1 = cabos.top();
        cabos.pop();

        long long cabo2 = cabos.top();
        cabos.pop();

        total_cost += max(cabo1, cabo2);

        long long novo_cabo = cabo1 + cabo2;
        cabos.push(novo_cabo);
    }

    cout << total_cost << "\n";

    return 0;
}