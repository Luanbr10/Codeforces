#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    vector <string> frase;
    int t1, t2;
    string palavra;
 
    cin >> t1;
    while (t1--){
        cin >> t2;
        for (int i = 0; i < t2; i++){
            cin >> palavra;
            frase.push_back(palavra);
        }
        
        for (int i = 0; i < t2 - 1; i++){
            for (int j = 0; j < t2 - 1; j++){
                if (frase[j].size() > frase[j+1].size()){
                    swap(frase[j], frase[j+1]);
                }
            }
        }
        for (int i = 0; i < t2; i++){
            if (i > 0){
                cout << " ";
            }
            cout << frase[i];
        }
        cout << endl;
 
        while (!frase.empty()){
            frase.pop_back();
        }
    }
}