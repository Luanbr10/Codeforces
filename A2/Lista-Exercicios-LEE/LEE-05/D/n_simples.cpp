#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int qnt, alvo;
    cin >> qnt >> alvo;
    vector <int> numeros;

    for (int i = 0; i < qnt; i++){
        int num; cin >> num;
        numeros.push_back(num);
    }
    for (int i = 0; i < numeros.size() - 2; i++){

        set <int> numeros_vistos;
        int novo_alvo = alvo - numeros[i];

        for (int j = i + 1; j < numeros.size(); j++){
            int complemento = novo_alvo - numeros[j];

            if (numeros_vistos.count(complemento)){
                cout << numeros[i] << " " << numeros[j] << " " << complemento << endl;
                return 0;
            }
            numeros_vistos.insert(numeros[j]);
        }
    }
    cout << "Nao existe" << endl;
    return 0;
}