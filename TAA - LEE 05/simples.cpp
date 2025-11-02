#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int qnt; cin >> qnt;
    vector <long long int> numeros;
    set <int> numeros_vistos;

    int alvo, complemento; cin >> alvo;

    for (int i = 0; i < qnt; i++){
        int num; cin >> num;
        numeros.push_back(num);
    }

    for (int i = 0; i < numeros.size(); i++){

        complemento = alvo - numeros[i];
        if (numeros_vistos.count(complemento)){
            cout << complemento << " " << numeros[i] << endl; 
            return 0;
        }
        numeros_vistos.insert(numeros[i]);
    }
    cout << "Nao existe" << endl;

    return 0;
}