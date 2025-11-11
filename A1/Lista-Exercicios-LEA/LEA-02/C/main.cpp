#include <bits/stdc++.h>
using namespace std;

void XORING(char* palavra1, char* palavra2, char* reservar) {
    int tam = strlen(palavra1);
 
    for (int i = 0; i < tam; i++) {
        if ((isupper(palavra1[i]) && isupper(palavra2[i])) || (islower(palavra1[i]) && islower(palavra2[i]))) {
            reservar[i] = toupper(palavra1[i]);
        } else {
            reservar[i] = tolower(palavra1[i]);
        }
    }
    
    reservar[tam] = '\0';
}
 
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int testes;
    cin >> testes;
 
    for (int i = 0; i < testes; i++) {
        char palavra1[101];
        char palavra2[101];
        char resultado[101];
 
        cin >> palavra1 >> palavra2;
 
        XORING(palavra1, palavra2, resultado);
        
        cout << resultado << endl;
    }
 
    return 0;
}