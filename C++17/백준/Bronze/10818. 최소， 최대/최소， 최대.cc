#include <stdio.h> //주어진 정수 N개 중 최댓값과 최솟값 출력.
int main(){
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<N; i++){
        if(max < arr[i]){
            max = arr[i];
        }
        else if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("%d %d\n", min, max);
    return 0;
}