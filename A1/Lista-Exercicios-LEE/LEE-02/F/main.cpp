#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, A, B, Y;
    cin >> T;

    while (T--)
    {
        cin >> A >> B >> Y;

        int AB_or = A | B;
        
        if ((AB_or | Y) != Y) {
            cout << -1 << "\n";
        } else {
            int C = Y - AB_or;
            cout << C << "\n";
        }
    }
    
    return 0;
}