#include <bits/stdc++.h>
using namespace std;
 
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long soma = 0, soma_total = 0;
    int tam = 0, num_faltante = 0;
    
    cin >> tam;
    soma_total = ((long long)tam * (tam + 1))/2;
    int num;
 
    if (tam >= 2 && tam <= 100000){      
        for (int i = 0; i < tam - 1; i++){
            cin >> num;
            soma += num;
        }
        num_faltante = soma_total - soma;
        cout << num_faltante << endl;
    }
    return 0;
}