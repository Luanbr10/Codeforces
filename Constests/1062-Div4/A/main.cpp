#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector <int> numeros;
 
    int mensagem = 1;
    int t; cin >> t;
 
    for (int i = 0; i < t; i++){
        mensagem = 1;
        for (int j = 0; j < 4; j++){
            int num; cin >> num;
            numeros.push_back(num);
        }
        for (int j = 0; j < 4; j++){
            for (int k = 0; k < 4; k++){
                if (numeros[j] != numeros[k]){
                    mensagem = 0;
                }
            }
        }
 
        if (mensagem){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
 
        while(!numeros.empty()){
            numeros.pop_back();
        }
    }
 
    return 0;
}