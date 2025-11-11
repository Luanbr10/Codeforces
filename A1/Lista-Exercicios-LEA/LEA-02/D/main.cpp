#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int p = 0, q = 0;
    unsigned long long num = 0;
 
    int testes = 0;
    cin >> testes;
 
    for (int i = 0; i < testes; i++){
        cin >> num >> p >> q;
 
        unsigned long long bit_p = (num >> p) & 1ULL;
        unsigned long long bit_q = (num >> q) & 1ULL;
 
        if (bit_p != bit_q){
            num ^= (1ULL << p) | (1ULL << q);
        }
        
        cout << num << "\n";
    }
 
    return 0;
}