#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int cont_pedra;
    int t; cin >> t;
    for (int i = 0; i < t; i++){
       cont_pedra = 0;
       string pedra, tesouro;
       cin >> pedra >> tesouro;
       set <char> pedras_repetidas;
       for(char c : pedra){
            pedras_repetidas.insert(c);
       }

       for (char c : pedras_repetidas){
        for (int i = 0; i < tesouro.size(); i++){
            if (c == tesouro[i]){
                cont_pedra++;
            }
        }
       }
       cout << "Contem "<< cont_pedra << " pedras negociaveis"<< endl;
    }
    return 0;
}