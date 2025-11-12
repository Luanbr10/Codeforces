#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    vector <int> numeros;
    int t, temp, num, j;
 
    cin >> t;
    while (t--){
        cin >> num;
        numeros.push_back(num);
    }
 
    for (int i = 0; i < numeros.size(); i++){
        if (i > 0){
            cout << " ";
        }
        cout << numeros[i];
    } cout << endl;
 
    for (int i = 0; i < numeros.size() - 1; i++){
        for (int j = 0; j < numeros.size()-1; j++){
            if (numeros[j] > numeros[j + 1]){
                swap(numeros[j], numeros[j + 1]);
 
                for(int k = 0; k < numeros.size(); k++){
                    if (k > 0){
                        cout << " ";
                    }
                    cout << numeros[k];
                }
                cout << endl;
            }
        }
    }
 
    return 0;
}