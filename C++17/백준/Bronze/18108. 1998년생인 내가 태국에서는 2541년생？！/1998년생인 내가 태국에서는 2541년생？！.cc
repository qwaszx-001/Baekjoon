#include <stdio.h>  //불기연도와 서기연도의 차는 543년
#define cal(a) ((a)-543)
int main(){
    int y;
    scanf(" %d", &y);
    printf("%d\n", cal(y));
    return 0;
}