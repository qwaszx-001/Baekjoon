#include <stdio.h> //n을 받으면 1~n까지의 합 출력
int main(){    
    int n, sum=0;
    scanf(" %d", &n);
    for(int i=1; i<=n; i++){ //i=1부터 시작, i=n이 될 때까지.
        sum += i; //sum에 1부터 커져가는 i값을 축적하기
    }
    printf("%d\n", sum);
    return 0;
}