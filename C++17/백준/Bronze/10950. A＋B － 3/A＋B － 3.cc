#include <stdio.h> //정수 A,B를 입력받고 A+B 출력.
int main(){
    int t, a, b;
    scanf(" %d", &t); //연산 반복 횟수를 지정해주는 t값 받기
    while(t--){
        scanf(" %d %d", &a, &b);
        printf("%d\n", a+b);
    }
    return 0;
}