#include <stdio.h>

int main(){
    int N, sum=0, digit;

    scanf("%d", &N);

    for(int i=0; i<N; i++){
        scanf("%1d", &digit); //"%1d" = 한자리 정수를 읽음;
        sum += digit;
    }

    printf("%d\n", sum);
    return 0;
}