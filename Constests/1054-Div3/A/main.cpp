#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int testes, tamanho;
 
    
    cin >> testes;
    
    for (int i = 0; i < testes; i++){
        cin >> tamanho;
        
        vector <int> vetor(tamanho);
        int zeros = 0;
        int negativos = 0;
 
        for (int j = 0; j < tamanho; j++){
            cin >> vetor[j];
            if (vetor[j] == 0){
                zeros++;
            }           
            else if(vetor[j] == -1){
                negativos++;
            }
        }
            int operacoes = zeros;
 
            if (negativos % 2 != 0){
                operacoes += 2;
            }
            cout << operacoes << endl;
        }
        
 
    return 0;
}