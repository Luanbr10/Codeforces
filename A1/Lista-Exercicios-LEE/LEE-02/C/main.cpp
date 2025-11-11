#include <bits/stdc++.h>
using namespace std;
    
int resolver(int* num, int qnt, int alvo){
    int esquerda = 0;
    int direita = qnt - 1;
 
    while (esquerda < direita) {
        int soma_atual = num[esquerda] + num[direita];
 
        if (soma_atual == alvo) {
            return 1;
        } 
        else if (soma_atual < alvo) {
            esquerda++;
        } 
        else {
            direita--;
        }
    }
    
    return 0;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int teste = 0, qnt = 0, alvo = 0;
 
    cin >> teste;
    int resultados[teste];
 
    for (int t = 0; t < teste; t++){
 
        cin >> qnt;
        int num[qnt];
 
        for (int j = 0; j < qnt; j++){
            cin >> num[j];
        }
        cin >> alvo;
        resultados[t] = resolver(num, qnt, alvo);
    }
    for (int t = 0; t < teste; t++){
        if (resultados[t]){
            cout << "SIM" << endl;
        }
        else{
            cout << "NAO" << endl;
        }
    }
    return 0;
}