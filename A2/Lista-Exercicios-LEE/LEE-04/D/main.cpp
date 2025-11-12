#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    vector<int> numeros;
    int n, consulta;
    cin >> n >> consulta;
 
    for (int i = 0; i < n; i++){
        int num;
        cin >> num;
        numeros.push_back(num);
    }
 
    for (int i = 0; i < consulta; i++){
        int indice; cin >> indice;
        if (n == 1 && numeros[0] == -1){
            cout << "NULL" << endl;
        }
 
        else if (indice == 1){
            cout << "RAIZ" << endl;
        }
 
        else{
            int indice_filho = indice - 1;
            int indice_pai = (indice_filho - 1) / 2;
            cout << numeros[indice_pai] << endl;
        }
    }
 
    return 0;
}
