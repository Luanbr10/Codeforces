#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string expressao;
    cin >> expressao;
 
    stack<char> pilha;
 
    for (char caractere : expressao) {
        if (caractere == '(' || caractere == '[' || caractere == '{') {
            pilha.push(caractere);
        } else if (caractere == ')' || caractere == ']' || caractere == '}') {
            if (pilha.empty()) {
                cout << "SyntaxError\n";
                return 0;
            }
 
            char topo = pilha.top();
 
            bool corresponde = (topo == '(' && caractere == ')') ||
                               (topo == '[' && caractere == ']') ||
                               (topo == '{' && caractere == '}');
 
            if (corresponde) {
                pilha.pop();
            } else {
                cout << "SyntaxError\n";
                return 0;
            }
        }
    }
 
    if (pilha.empty()) {
        cout << "OK\n";
    } else {
        cout << "SyntaxError\n";
    }
 
    return 0;
}