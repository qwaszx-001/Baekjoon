#include <stdio.h> //정수 N개로 이루어진 수열 A에서 정수 X보다 작은 수를 모두 출력하기
int main(){
    int N, X;
    scanf("%d %d", &N, &X); //첫 줄에서 수열 A의 길이(=N), 크기비교의 기준값 X 입력받기
    int A[N]; /*배열은 꼭 변수 초기화 이후에 선언하기*/
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    for(int i=0; i<N; i++){
        if(A[i] < X){ //입력받은 값 저장해가며 이전에 저장했던 X와 비교(순서대로 출력)
            printf("%d ", A[i]);
        }
    }
    printf("\n");
    return 0;
}