#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        string baralho1, baralho2;
        cin >> baralho1 >> baralho2;
 
        set <char> cartas_baralho1;
        for (char carta : baralho1) {
            cartas_baralho1.insert(carta);
        }
 
        set <char> cartas_comuns;
        for (char carta : baralho2) {
            if (cartas_baralho1.count(carta)) {
                cartas_comuns.insert(carta);
            }
        }
 
        if (cartas_comuns.empty()) {
            cout << "Baralhos prontos para o duelo" << endl;
        } else {
            for (char carta : cartas_comuns) {
                cout << carta;
            }
            cout << endl;
        }
    }
 
    return 0;
}