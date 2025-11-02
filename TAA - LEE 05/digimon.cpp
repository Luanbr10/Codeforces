#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int qnt; 
    cin >> qnt;

    set<tuple<int, int, string>> fila_prioridade;

    map<string, pair<int, int>> digimons;

    int tempoCounter = 0;

    for(int i = 0; i < qnt; i++) {
        string acao; 
        cin >> acao;

            if (acao == "CHEGA") {
            string nome;
            int fome;
            cin >> nome >> fome;

            int tempo = tempoCounter++;

            digimons[nome] = {fome, tempo};
            fila_prioridade.insert({-fome, tempo, nome});

        } 
        else if (acao == "FOME") {
            string nome;
            int x;
            cin >> nome >> x;


            int fome_antiga = digimons[nome].first;
            int tempo = digimons[nome].second;


            fila_prioridade.erase({-fome_antiga, tempo, nome});

            int fome_nova = fome_antiga + x;
            digimons[nome].first = fome_nova;
            fila_prioridade.insert({-fome_nova, tempo, nome});
        } 
        else if (acao == "SAI") {
            string nome;
            cin >> nome;

            int fome = digimons[nome].first;
            int tempo = digimons[nome].second;

            fila_prioridade.erase({-fome, tempo, nome});
            digimons.erase(nome);
        } 
        else if (acao == "SERVE") {
            if (!fila_prioridade.empty()) {

                auto it = fila_prioridade.begin();
                string nome_servido = get<2>(*it);

                cout << nome_servido << endl;

                fila_prioridade.erase(it);
                digimons.erase(nome_servido);
            }
        }
    }

    return 0;
}