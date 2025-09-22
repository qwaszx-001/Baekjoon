#include <stdio.h>

int main(){
    int Q, K, L, B, Kn, P;
    int BQ=1, BK=1, BL=2, BB=2, BKn=2, BP=8;
    scanf("%d %d %d %d %d %d", &Q, &K, &L, &B, &Kn, &P);

    printf("%d %d %d %d %d %d\n", BQ-Q, BK-K, BL-L, BB-B, BKn-Kn, BP-P);
    

    return 0;
}