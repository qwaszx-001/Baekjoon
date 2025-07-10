#include <stdio.h> //윤년이라면 1, 아니라면 0 출력. (4의배수 && 100의 배수X or 400의 배수)
int main(){
    int year;
    scanf(" %d", &year);
    if((year%4 == 0 && year%100 != 0) || year%400 == 0){
        printf("1\n");
    }
    else{
        printf("0\n");
    }
    return 0;
}