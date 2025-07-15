#include <stdio.h> //N개의 정수가 주어졌을 때, 그 안에 정수 v가 몇 개 존재하는가?
int main(){
    int N, v; //1<=N<=100, -100<=v<=100
    scanf("%d", &N);
    int arr[N]; //주어진 N크기 만큼의 배열
    for(int i=0; i<N; i++){ //버퍼 오버런 방지를 위해 i=0으로 초기화.
        scanf("%d", &arr[i]); //N번 반복하며 정숫값 배열에 수집
    }
    scanf("%d", &v);
    int v_count = 0; //원하는 정수의 개수를 저장할 변수 선언
    for(int i=0; i<N; i++){ 
        if(arr[i] == v){ //반복 중 원하는 정수가 나오면 카운트 변수값 증가
            v_count++;
        }
    }
    printf("%d\n", v_count);
    return 0;
}