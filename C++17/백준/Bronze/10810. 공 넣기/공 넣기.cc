#include <stdio.h> //N개의 바구니에 같은 숫자크기의 공을 M번 넣음. 하나의 바구니엔 공 하나만이 들어갈 수 있음.

int main(){
    int a, M; //N[a]:바구니 개수; M:공을 넣을 횟수;
    scanf("%d %d", &a, &M);
    int N[101] = {0}; //1<=N<=100; 최대 101개로 고정 후 배열 값 초기화하여 청소.

    int i, j, k; //1<=i<=j<=N; 1<=k<=N;
    for(int b=0; b<M; b++){
        scanf("%d %d %d", &i, &j, &k);
        while(i<=j){   //i번 ~ j번 바구니까지
            N[i] = k; //k값 공을 모두 집어넣기
            i++;
        }
    }

    for(int b=1; b<=a; b++){ //1번 바구니부터 전체 N개 바구니 배열을 모두 출력.
        printf("%d ", N[b]);
    }
    printf("\n");
    return 0;
}