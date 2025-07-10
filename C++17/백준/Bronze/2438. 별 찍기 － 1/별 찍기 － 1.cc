#include <stdio.h>  //n번째 줄에 n개의 별(1<=n<=100)
int main(){
    int n;
    scanf( "%d", &n);
        for (int i=1; i<=n; i++){
            for(int k=1; k<=i; k++){
                printf("*");
            }
            printf("\n");
        }return 0;
}