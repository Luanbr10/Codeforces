#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    queue<string> filaNorte;
    queue<string> filaSul;
    queue<string> filaLeste;
    queue<string> filaOeste;
 
    string palavra;
    string direcao_atual;
 
    while (cin >> palavra && palavra != "0") {
        if (palavra == "N" || palavra == "S" || palavra == "L" || palavra == "O") {
            direcao_atual = palavra;
        } else {
            if (direcao_atual == "N") {
                filaNorte.push(palavra);
            } else if (direcao_atual == "S") {
                filaSul.push(palavra);
            } else if (direcao_atual == "L") {
                filaLeste.push(palavra);
            } else if (direcao_atual == "O") {
                filaOeste.push(palavra);
            }
        }
    }
 
    bool primeiro = true;
    while (!filaNorte.empty() || !filaSul.empty() || !filaLeste.empty() || !filaOeste.empty()) {
        if (!filaNorte.empty()) {
            if (!primeiro) {
                cout << " ";
            }
            cout << filaNorte.front();
            filaNorte.pop();
            primeiro = false;
        }
        if (!filaSul.empty()) {
            if (!primeiro) {
                cout << " ";
            }
            cout << filaSul.front();
            filaSul.pop();
            primeiro = false;
        }
        if (!filaLeste.empty()) {
            if (!primeiro) {
                cout << " ";
            }
            cout << filaLeste.front();
            filaLeste.pop();
            primeiro = false;
        }
        if (!filaOeste.empty()) {
            if (!primeiro) {
                cout << " ";
            }
            cout << filaOeste.front();
            filaOeste.pop();
            primeiro = false;
        }
    }
    cout << endl;
 
    return 0;
}