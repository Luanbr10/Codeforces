#include <bits/stdc++.h>
using namespace std;

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; 
    cin >> t;

    while (t--){
        string P1, P2; 
        cin >> P1 >> P2;

        if (P1.length() != P2.length()){
            cout << "DIFERENTES\n";
        }
        else{
            sort(P1.begin(), P1.end());
            sort(P2.begin(), P2.end());
            
            if (P1 == P2){
                cout << "ANAGRAMAS\n";
            }
            else{
                cout << "DIFERENTES\n";
            }
        }
    }

    return 0;
}