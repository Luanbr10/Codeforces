#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int qnt; 
    cin >> qnt;

    priority_queue<pair<int, string>> torneio;

    for (int i = 0; i < qnt; i++){
     string nome;
     int forca;
     cin >> nome >> forca;
        torneio.push({forca, nome}); 
    }
    while (torneio.size() >= 2) {
        
        pair<int, string> poke1 = torneio.top();
        torneio.pop();

        pair<int, string> poke2 = torneio.top();
        torneio.pop();

        string nome1 = poke1.second;
        int forca1 = poke1.first;
        string nome2 = poke2.second;
        int forca2 = poke2.first;

        cout << nome1 << " (" << forca1 << ") x (" << forca2 << ") " << nome2 << " : ";

        if (forca1 > forca2) {
            cout << nome1 << " venceu\n";
            int nova_forca = forca1 - forca2;
            torneio.push({nova_forca, nome1});
        } 
        else { 
            cout << "empate\n";
        }
    }

    if (torneio.size() == 1) {
        string nome_vencedor = torneio.top().second;
        int forca_final = torneio.top().first;
        cout << nome_vencedor << " venceu com " << forca_final << "\n";
    } else {
        cout << "nenhum vencedor\n";
    }

    return 0;
}