#include <stdio.h> //9개의 서로 다른 자연수를 입력받아, 최댓값과 입력 순서를 출력.
int main(){
    int N[9];
    for(int i=0; i<9; i++){
        scanf("%d", &N[i]); //0~8번까지 9개의 자연수 입력받기
    }

    int max = N[0];
    int index = 0;
    for(int i=0; i<9; i++){
        if(max < N[i]){
            max = N[i]; //최댓값 가려내기
            index = i; /*입력된 N[i]값이 최댓값이 될 순간의 i값을 index변수에 저장해놓기*/
        }
        
    }
    printf("%d\n%d\n", max, index+1); //최댓값의 i를 index변수에 따로 저장하지 않고 그냥 'i+1'출력해버리면 무조건 9가 나옴.
    return 0;
}