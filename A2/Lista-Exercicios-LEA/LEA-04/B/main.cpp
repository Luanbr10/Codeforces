#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);
 
    int t; cin >> t;
    vector <int> numeros; 
 
    for (int i = 0; i < t; i++){
        int numero; cin >> numero;
        numeros.push_back(numero);
    }
 
    int consultas; cin >> consultas;
 
    for (int i = 0; i < consultas; i++){
        
        int indice; cin >> indice;
 
        if (t == 1 && numeros[0] == -1){
            cout << "NULL\n";
            continue; 
        }
 
        if (indice == 1){
            cout << "RAIZ";
        }
        else{
            int indice_pai = (indice/2) - 1;
            cout << numeros[indice_pai];
        }
        
        cout << " - "; 
 
        int indice_filho_esquerda = (indice * 2) - 1;
        if (indice_filho_esquerda >= t || numeros[indice_filho_esquerda] == -1){
            cout << "NULL";
        }
        else{
            cout << numeros[indice_filho_esquerda];
        }
        cout << " ";
 
        int indice__filho_direita = (indice*2);
        if (indice__filho_direita >= t || numeros[indice__filho_direita] == -1){ 
            cout << "NULL";
        }
        else{
            cout << numeros[indice__filho_direita];
        }
        cout << endl; 
        
    }
 
    return 0;
}