#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int P, S;
    cin >> P >> S;
    
    map<string, set<string>> escolhas;
    
    for(int i = 0; i < P; i++){
        string F, D1, D2, D3;
        cin >> F >> D1 >> D2 >> D3;
        escolhas[F] = {D1, D2, D3};
    }
    
    for(int i = 0; i < S; i++){
        string N, B;
        cin >> N >> B;
        
        if(escolhas.count(N) == 0){
            cout << N << " queria ganhar qualquer coisa e ganhou " << B << "!\n";
        
        } else {
            if(escolhas[N].count(B) > 0){
                cout << N << " conseguiu ganhar " << B << "!\n";
            } else {
                cout << N << " infelizmente ganhou " << B << "...\n";
            }
        }
    }
    
    return 0;
}