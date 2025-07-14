#include <stdio.h> //케이스횟수 T, 연산인자 A,B
int main(){
    int T, A[1000000], B[1000000]; //최대입력 대비 배열사용.
    scanf("%d",&T); //T횟수 입력.
    for(int i=0; i<T; i++){ //i=0부터 입력받은 T번까지 반복
        scanf("%d %d", &A[i], &B[i]); //배열에 차례대로 입력받기.
    }
    for(int i=0; i<T; i++){ //배열에 입력된 값 차례로 계산 후 출력.
        printf("Case #%d: %d\n", i+1, A[i]+B[i]); //Case #1부터 시작
    }
    return 0;
}