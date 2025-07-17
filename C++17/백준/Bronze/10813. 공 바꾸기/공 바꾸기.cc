#include <stdio.h> //N번까지의 바구니에 같은 번호의 공들이 하나씩 들어가 있고, M번동안 i번, j번 공을 서로 교환한다.

int main(){
    int N, M; //N[a]:바구니 개수; M:공을 바꿀 횟수;
    scanf("%d %d", &N, &M);
    int bskt[101] = {0}; //1<=N<=100; 최대 101개로 고정 후 배열 값 초기화하여 청소.

    for(int n=1; n<=N; n++){
        bskt[n] = n; //처음엔 각 바구니의 숫자와 같은 숫자의 공이 들어가 있음.
    }

    int i, j;
    for(int m=0; m<M; m++){
        scanf("%d %d", &i, &j);
        
        //배열값을 바꾸는 정석적인 방식은 임시변수를 사용하기
        int tmp = bskt[i];
        bskt[i] = bskt[j];
        bskt[j] = tmp;
    }

    for(int n=1; n<=N; n++){
        printf("%d ", bskt[n]);
    }
    printf("\n");
    return 0;
}