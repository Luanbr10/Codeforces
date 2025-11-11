#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
 
    int A, Q;
    cin >> A >> Q;
 
    vector<int> notas(A);
    for (int i = 0; i < A; ++i) {
        cin >> notas[i];
    }
 
    for (int j = 0; j < Q; ++j) {
        int C;
        cin >> C;
 
        auto it = upper_bound(notas.begin(), notas.end(), C);
        
        int indice = it - notas.begin();
        
        int quantidade = A - indice;
 
        cout << quantidade << " notas maiores que " << C << "\n";
    }
 
    return 0;
}