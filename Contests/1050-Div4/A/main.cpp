#include <stdio.h>
 
int main(){
 
    int testes = 0, n = 0, x = 0, soma = 0;
 
    scanf("%d", &testes);
    if (testes <= 100){
        for (int i = 0; i < testes; i++){
            scanf("%d", &x);
            scanf("%d", &n);
            if (x >= 1 && n <= 10){
                for (int j = 0; j < n; j++){
                    if (j % 2 == 0){
                        soma += x;
                    }
                    else{
                        soma = soma - x;
                    }
                }
                printf("%d\n", soma);
                soma = 0;
            }
            }
        }
    return 0;
}