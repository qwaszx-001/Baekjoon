#include <stdio.h>
#include <string.h>

int main(){
    char S[101];
    int alpbt[27];

    for(int i=0; i<26; i++) {
        alpbt[i] = -1;              //배열의 초기값은 -1로 세팅;
    }

    scanf("%s", S);
    for(int i=0; i<strlen(S); i++){
        int idx = S[i] - 'a';       //문자를 인덱스로 변환; ex) 'a' = 0, 'b' = 1 ...
        if(alpbt[idx] == -1){       //문자가 처음 등장한 경우에만 기록;
            alpbt[idx] = i;         //알파벳 인덱스 배열 안에 새로 읽어낸 문자의 위치 인덱스 저장;
        }
    }

    for(int i=0; i<26; i++){
        printf("%d ", alpbt[i]);    //알파벳 배열값 모두 출력;
    }
    printf("\n");

    return 0;
}