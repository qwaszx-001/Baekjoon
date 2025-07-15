#include <stdio.h>  //A,B값을 연속적으로 입력받고 그 합 또한 출력. 0 0을 입력하면 종료.
int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    while(A!=0 && B!=0){
    printf("%d\n", A+B);
    scanf("%d %d", &A, &B);
    }
    return 0;
}