#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long quantidadeAmigos = 0, metaVisualizacoes = 0;
    cin >> quantidadeAmigos >> metaVisualizacoes;

    vector<long long> temposIniciais(quantidadeAmigos);
    vector<long long> intervalos(quantidadeAmigos);
    for (int i = 0; i < quantidadeAmigos; ++i) {
        cin >> temposIniciais[i] >> intervalos[i];
    }

    long long limiteInferior = 0;
    long long limiteSuperior = 200000000000000LL;
    long long resposta = limiteSuperior;

    while (limiteInferior <= limiteSuperior) {
        long long tempoMedio = limiteInferior + (limiteSuperior - limiteInferior) / 2;
        long long viewsNoTempoMedio = 0;

        for (int i = 0; i < quantidadeAmigos; ++i) {
            if (tempoMedio >= temposIniciais[i]) {
                viewsNoTempoMedio += ((tempoMedio - temposIniciais[i]) / intervalos[i]) + 1;
            }
        }

        if (viewsNoTempoMedio >= metaVisualizacoes) {
            resposta = tempoMedio;
            limiteSuperior = tempoMedio - 1;
        } else {
            limiteInferior = tempoMedio + 1;
        }
    }

    cout << resposta << "\n";

    return 0;
}