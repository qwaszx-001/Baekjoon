#include <stdio.h> //영수증. 구매한 물품의 가격, 개수와 총액이 서로 일치 하는지 확인 출력.
int main(){
    long long X, a; //X=영수증에 적힌 총액, a=각 물건의 가격 - 1<=X<=1,000,000,000 & 1<=a<=1,000,000
    int N, b;      //N=구매한 품목의 수, b=각 물건의 개수 - 1<=N<=100 & 1<=b<=10
    long long cost = 0; //모든 품목의 a*b를 합한 총액
    scanf(" %lld", &X);
    scanf(" %d", &N);
    for(int i=1; i<=N; i++){
        scanf(" %lld %d", &a, &b);
        cost += a*b;
    }
    if(cost == X){ //영수증에 표시된 총액 = 모든 품목들의 총액 이라면
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}