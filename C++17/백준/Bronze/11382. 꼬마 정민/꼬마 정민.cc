#include <stdio.h>  //A+B+C의 값 출력, 범위는 1<=A,B,C<=10**12

int main() {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld\n", a+b+c);
    return 0;
}
