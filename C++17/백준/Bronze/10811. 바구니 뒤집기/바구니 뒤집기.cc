#include <stdio.h> //1~100의 번호가 적힌 일렬의 바구니의 순서를 바꾸고 바꾼 순서를 가장 왼쪽부터 출력;
int main(){
    int n, m;
    scanf("%d %d", &n, &m); //n:바구니 개수; m:순서 믹싱 횟수;
    
    int bskt[101] = {0};
    for (int a = 0; a < n; a++) {
        bskt[a] = a + 1;
}

    int i, j, temp;
    for(int a=0; a<m; a++){
        scanf("%d %d", &i, &j);
        i--; j--; //배열은 0-based index라서 입력받은 숫자에서 -1 해줘야 사용자가 원하는 범위와 일치함;
        while(i<j){
            temp = bskt[i];
            bskt[i] = bskt[j];
            bskt[j] = temp;
            i++;
            j--;
        }
    }

    for(int a=0; a<n; a++){
    printf("%d ", bskt[a]);
    }

    printf("\n");
    return 0;
}