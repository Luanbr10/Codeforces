#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
    while (t--) {
        int l;
        cin >> l;
 
        set <pair<int, string>> registros;
        int erros = 0;
 
        for (int i = 0; i < l; ++i) {
            int matricula;
            string disciplina;
            cin >> matricula >> disciplina;
 
            if (!registros.insert({matricula, disciplina}).second) {
                erros++;
            }
        }
 
        if (erros == 0) {
            cout << "Arquivo OK" << endl;
        } else {
            cout << "Corrompido com " << erros << " erro(s)" << endl;
        }
    }
 
    return 0;
}