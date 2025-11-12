#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    for (int i = 0; i < t; i++){
        int tam;
        cin >> tam;
        vector<long long int> num(tam);
 
        for (int j = 0; j < tam; j++){
            cin >> num[j];
        }
 
        sort(num.begin(), num.end());
 
        long long int max_diferenca = 0;
 
        for (int j = 0; j < tam; j+=2) {
            long long int elemento1 = num[j];
            long long int elemento2 = num[j + 1];
            long long int diferenca_atual = abs(elemento1 - elemento2);
            max_diferenca = max(max_diferenca, diferenca_atual);
        }
 
        cout << max_diferenca << endl;
    }
}