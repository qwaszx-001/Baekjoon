#include <stdio.h> //단어 S가 주어졌을 때, 문자열 S의 길이 출력;
#include <stdlib.h> //exit함수 사용;
#include <string.h> //strlen함수 사용;

int main(){
    char S[101]; //문자열의 길이는 최대 100;

    scanf("%s", S);
    
    printf("%lu\n", strlen(S)); //strlen -> unsigned long format
    
return 0;
}