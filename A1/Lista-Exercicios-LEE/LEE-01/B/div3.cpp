#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    queue <pair<ll, string>> resultados;
    int d = 0;
    while (cin >> d && d != -1)
    {
        string n_str;
        cin >> n_str;
    
        ll soma = 0;
    
        for (char ler_num : n_str){
            soma += (ler_num - '0');
        }
    
        if (soma % 3 == 0){
            resultados.push({soma, "sim"});
        }
        else{
            resultados.push({soma, "nao"});
        }
    }
    while (!resultados.empty())
    {
        pair <ll, string> res = resultados.front();
        cout << res.first << " " <<res.second << endl;
 
        resultados.pop();
    }
    
 
    return 0;
}