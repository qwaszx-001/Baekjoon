#include <stdio.h>  //A,B값을 연속적으로 입력받고 그 합 또한 출력. 다만 횟수 제한 없음.
int main(){
    int A, B;
    while(scanf("%d %d", &A, &B) != EOF){ //EOF; 입력이 끝날 때까지 읽고 처리함. 
                                         //macOS에선 ctrl+D --> EOF
        printf("%d\n", A+B);
    }
    return 0;
}