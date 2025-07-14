#include <stdio.h> //주어진 정수 N의 값만큼 'long'을 출력함(4<=N<=1,000; N은 4의 배수)
int main(){
    int N, i;
    scanf("%d", &N);
    for(i=N/4; i>=1; i--){ //주어진 N을 4로 나눈 몫=횟수만큼 반복.
        printf("long "); //'long'과 'long'사이, 'long'과 'int'사이에 공백이 한 칸 존재.
    }
    printf("int\n"); //'long'반복출력이 끝나면 'int'출력으로 마무리.
    return 0;
}