
#include <stdio.h>
 
int main(){
    int t = 0;
    scanf("%d", &t);
 
    for (int i = 0; i < t; i++){
        int n = 0, m = 0;
        long long x = 0, y = 0;
 
        scanf("%d %d %lld %lld", &n, &m, &x, &y);
 
        for (int j = 0; j < n; j++){
            int cordernada_a = 0;
            scanf("%d", &cordernada_a);
 
        }
        for (int j = 0; j < m; j++){
            int cordernada_b = 0;
            scanf("%d", &cordernada_b);
        }
        printf("%d\n", n + m);
    }
    return 0;
}