#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    priority_queue <pair <int, string>> detentos;

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int num; 
        string nome;

        cin >> nome >> num;
        detentos.push({num, nome});
    }

    while (!detentos.empty()){
        pair <int, string> atual = detentos.top();

        detentos.pop();

        cout << atual.second << " " << atual.first << endl;
        
        int novo_tempo = atual.first/2;

        if (novo_tempo >= 1){
            detentos.push({novo_tempo, atual.second});
        }
    }
    
    return 0;
}