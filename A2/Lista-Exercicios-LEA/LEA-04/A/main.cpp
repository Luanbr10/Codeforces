#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t, contador = 0;
    vector <int> numeros;
    
    cin >> t;
    for (int i = 0; i < t; i++){
        int num; cin >> num;
        numeros.push_back(num);
    }
    
    for (int i = 0; i < t-1; i++)
    {
        int minimo = i;
        
        for (int j = i+1; j < t; j++){
            
            if (numeros[j] < numeros[minimo]){
                minimo = j;
            }
        }
        
        if (i != minimo){
            swap(numeros[i], numeros[minimo]);
            contador++;
        }
    }
    
    for (int i = 0; i < numeros.size(); i++){
        if (i > 0) {
            cout << " ";
        }
        cout << numeros[i];
    }
    
    cout << "\n"; 
    
    cout << contador << "\n";
    
    return 0;
}