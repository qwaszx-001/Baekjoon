#include <stdio.h> //단어 S와 정수 i가 주어졌을 때, S의 i번째 문자 출력;
#include <stdlib.h> //exit함수 사용;
#include <string.h> //strlen함수 사용;

int main(){
    char S[1001]; //문자열의 길이는 최대 1000;
    int i;

    scanf("%s", S);
    scanf("%d", &i);
    
    if(i<1 || i>strlen(S)){ //주어진 정수 i의 범위는 1 <= i <= |S|;
        exit(0);            //해당 범위를 벗어나면 실행종료;
    }

    printf("%c\n", S[i-1]); //1-based index(문제의 인덱스) --> 0-based index(C의 배열 인덱스);
    
return 0;
}