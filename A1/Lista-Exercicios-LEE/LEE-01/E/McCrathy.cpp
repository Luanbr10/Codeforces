#include <iostream>
using namespace std;
 
int main() {
    int C;
    cin >> C;
 
    int resultados[100001];
 
    for (int i = 0; i < C; i++) {
        int N;
        cin >> N;
 
        if (N > 100) {
            resultados[i] = N - 10;
        } else {
            resultados[i] = 91;
        }
    }
 
    for (int i = 0; i < C; i++) {
        cout << resultados[i] << endl;
    }
 
    return 0;
}