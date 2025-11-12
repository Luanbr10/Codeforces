#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    vector <int> numeros;
    int n, consultas, indice, filho_direita, filho_esquerda;
    cin >> n >> consultas;
 
    if (n == 1){
        cout << "NULL" << endl;
        return 0;
    }
    
    for (int i = 0; i < n; i++){
        int num;
        cin >> num; numeros.push_back(num);
    }
 
    for (int i = 0; i < consultas; i++){
        cin >> indice; 
        indice -= 1;
 
        filho_esquerda = (2*indice) + 1;
        filho_direita = (2*indice) + 2;
 
    
        if (filho_esquerda >= numeros.size() || numeros[filho_esquerda] == -1){
            cout << "NULL" << " ";
        }
        else{
            cout << numeros[filho_esquerda] << " ";
        }
        if (filho_direita >= numeros.size() || numeros[filho_direita] == -1){
            cout << "NULL" << endl;
        }
        else{
            cout << numeros[filho_direita] << endl;
        }
    }
    return 0;
}