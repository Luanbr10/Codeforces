#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int quantidadeAcoes;
    cin >> quantidadeAcoes;
 
    stack<string> pilhaDeSonhos;
 
    for (int i = 0; i < quantidadeAcoes; ++i) {
        string acao;
        cin >> acao;
 
        if (acao == "infiltrar") {
            string nome;
            cin >> nome;
            pilhaDeSonhos.push(nome);
        } else if (acao == "chute") {
            if (!pilhaDeSonhos.empty()) {
                pilhaDeSonhos.pop();
            }
        } else if (acao == "totem") {
            if (pilhaDeSonhos.empty()) {
                cout << "acordado\n";
            } else {
                cout << "dentro do sonho de " << pilhaDeSonhos.top() << "\n";
            }
        }
    }
 
    return 0;
}