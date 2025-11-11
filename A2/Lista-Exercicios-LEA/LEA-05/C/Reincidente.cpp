#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map <string, int> database;
    string nome; int artigo;

    while (true){
        cin >> nome >> artigo;

        if (nome == "fim"){
            break;
        }
    
        int crime_anteriores = database[nome];
    
        if (crime_anteriores == 0){
            cout << nome << " eh reu primario" << endl;
        }
        else{
            cout << nome << " eh reincidente com " << crime_anteriores << " crime(s)" << endl;
        }
        database[nome]++;
    }
        
    return 0;
}