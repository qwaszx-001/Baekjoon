#include <stdio.h>  //A+B, A-B, A*B, A/B, A%B 순서대로 출력
int main(){
    int a, b;
    scanf(" %d %d", &a, &b);
    printf("%d\n", a+b);
    printf("%d\n", a-b);
    printf("%d\n", a*b);
    printf("%d\n", a/b);
    printf("%d\n", a%b);
    return 0;
}