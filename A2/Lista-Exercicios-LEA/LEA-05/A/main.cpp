#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set <char> repeticao;
    queue <string> remontada;

    string palavra;
    cin >> palavra;

    for (char c : palavra){
        repeticao.insert(c);
    }

    for (char c : repeticao){
        cout << c;
    }
    cout << endl;
    return 0;
}