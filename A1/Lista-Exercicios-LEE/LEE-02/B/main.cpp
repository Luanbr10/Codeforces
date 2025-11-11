#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
 
    while (scanf("%d", &N) == 1 && N != -1) {
        
        int abandonado = 0;
        int numero_atual;
 
        for (int i = 0; i < N; i++) {
            cin >> numero_atual;
            abandonado = abandonado ^ numero_atual;
        }
 
        cout << abandonado << endl;
    }
 
    return 0;
}