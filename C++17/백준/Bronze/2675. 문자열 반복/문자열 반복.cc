#include <stdio.h>
#include <string.h>

int main(){
    int T, R;   //T: Testcase, R: Repeat;
    char S[21], P[161];   //S: String, P: rePeated_string; P[161] = (20*8=160 + '\0');

    scanf("%d", &T);
    for(int i=0; i<T; i++){
        scanf(" %d %s", &R, S);   //공백으로 입력인자 구분받기;

        int idx = 0;   //배열 P에 문자를 채워넣을 현재 위치;
        for(int i=0; i<strlen(S); i++){   //문자열 S를 돌면서
            for(int j=0; j<R; j++){   //반복횟수 R만큼 반복;
                P[idx++] = S[i];   //S[i] 자리의 문자를 P[idx] 자리에 입력하고 idx++;
            }
        }
        P[idx] = '\0';   //문자열 끝에 null문자 추가 -> 문자열 종료;

        printf("%s\n", P);   //반복된 문자열 출력;
    }

    return 0;
}