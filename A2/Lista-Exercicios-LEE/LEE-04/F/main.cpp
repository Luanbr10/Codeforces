#include <bits/stdc++.h>
using namespace std;
 
int main(){
    set <string> listaChurras;
 
    int t; cin >> t;
    for (int i = 0; i < t; i++){
        
        int qnt_alimentos; cin >>qnt_alimentos;
        while(qnt_alimentos--){
            string item; cin >> item;
    
            if (listaChurras.find(item) == listaChurras.end()){
                cout << "adicionando " << item << endl; 
                listaChurras.insert(item);
            }
            else{
                cout << item << " ja tem" << endl;
            }
        }
    }
 
    cout << "Itens do churrasco:" << endl;
    for (const string&item : listaChurras){
        cout << item << endl;
    }
 
    return 0;
}