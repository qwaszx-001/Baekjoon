#include <stdio.h> //1~10번까지 입력받은 수를 42로 나눈 나머지 중 서로 다른 값의 갯수를 출력;
int main(){
    int n, remainder; //n=입력받을 값 10개; re=나머지;
    int check[42] = {0}; //서로 다른 값의 나머지를(나머지값의 중복여부를) 체크하기 위해 check배열 추가 선언;
    int count = 0;

    for(int i=0; i<10; i++){
        scanf("%d", &n);
        remainder = n%42;

        if(check[remainder] == 0){ //check[나머지]의 배열이 비어있다면
            check[remainder] = 1; //1로 채우기;
            count++;             //출력값(서로다른 나머지의 개수)인 count값 +1;
        }
    }

    printf("%d\n", count);
    return 0;
}