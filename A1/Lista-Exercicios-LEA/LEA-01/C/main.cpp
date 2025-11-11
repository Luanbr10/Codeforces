#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int num){
    if (num < 2) return false;
 
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0) return false;
    }
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int numero = 0, t = 0;
    cin >> t;
    while (t--){
        cin >> numero;
        if (isPrime(numero)){
            if (isPrime(numero + 2) || isPrime(numero - 2)) cout << "O numero " << numero << " eh um primo gemeo" << endl;
 
            else{
                cout << "O numero " << numero << " nao eh um primo gemeo" << endl;
 
            }
        }
        else{
            cout << "O numero " << numero << " nao eh um primo gemeo" << endl;
 
        }  
    }  
 
}