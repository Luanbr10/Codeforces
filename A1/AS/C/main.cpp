#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
 
int main(){
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    queue <char> cebola;
 
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string palavra;
        getline(cin, palavra); 
 
        for (int i = 0; i < palavra.size(); i++)
        if (palavra[i] == 'r'){
            palavra[i] = 'l';
        }
        else if (palavra[i] == 'R'){
            palavra[i] = 'L';
        }
        cout << palavra << endl;
        
    }
 
    return 0;
}