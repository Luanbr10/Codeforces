#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int table; cin >> table;
    vector <vector<int>> hash(table);
    vector <int> numeros;

    int t; cin >> t;
    for (int i = 0; i < t; i++){
        int num; cin >> num;
        numeros.push_back(num);
    }

    for (int i = 0; i < numeros.size(); i++){
        int indice = numeros[i] % table;
        hash[indice].push_back(numeros[i]);
    }

    for (int i = 0; i < hash.size(); i++){
        cout << i << " -> ";
        for (int j = 0; j < hash[i].size(); j++){
            cout << hash[i][j] << " -> ";
        }
        cout << "\\" << endl;
    }

    return 0;
}