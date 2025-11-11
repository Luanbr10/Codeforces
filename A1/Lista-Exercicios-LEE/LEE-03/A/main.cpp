#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    queue <pair<int, int>> domino;
    queue <pair<int, int>> mesa;
 
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int a, b;
        cin >> a >> b;
        domino.push({a, b});
    }
    while (!domino.empty())
    {
        pair <int, int> peca_jogada = domino.front();
        mesa.push(peca_jogada);
        domino.pop();
 
        if (domino.empty()){
            break;
        }
 
        pair <int, int> analisar_peca = domino.front();
        if (analisar_peca.first + analisar_peca.second == 7){
            domino.push(analisar_peca);
            domino.pop();
        }
        else{
            domino.pop();
        }
    }
    while (!mesa.empty())
    {
        pair <int, int> jogar = mesa.front();
        cout << jogar.first << " " << jogar.second << endl;
        mesa.pop();
    }
    
}