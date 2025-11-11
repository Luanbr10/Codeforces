#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int N, M, Q;
    cin >> N >> M >> Q;
 
    vector<vector<int>> matriz(N, vector<int>(M));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matriz[i][j];
        }
    }
 
    for (int k = 0; k < Q; ++k) {
        int V;
        cin >> V;
 
        int linha = 0;
        int coluna = M - 1;
        int linhaEncontrada = -1;
        int colunaEncontrada = -1;
 
        while (linha < N && coluna >= 0) {
            int valorAtual = matriz[linha][coluna];
 
            if (V == valorAtual) {
                linhaEncontrada = linha;
                colunaEncontrada = coluna;
                coluna--;
            } else if (V < valorAtual) {
                coluna--;
            } else {
                linha++;
            }
        }
 
        cout << linhaEncontrada << " " << colunaEncontrada << "\n";
    }
 
    return 0;
}