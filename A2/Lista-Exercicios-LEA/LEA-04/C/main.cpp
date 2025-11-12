#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t; cin >> t;
 
    for (int i = 0; i < t; i++){
        string palavra;
        cin >> palavra;
    
        set <char> caracteres_vazios;
    
        for (char c : palavra){
            caracteres_vazios.insert(c);
        }
    
        if (caracteres_vazios.size() == palavra.size()){
            cout << "STRONGRAMA" << endl;
        }
        else{
            cout << "WEAKORD" << endl;
        }        
    }
 
    return 0;
}