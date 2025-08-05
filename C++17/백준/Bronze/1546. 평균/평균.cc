#include <stdio.h> //점수 조작 후 평균내기;
int main(){
    int n; //응시한 과목 개수;
    double m[1001], max = 0, sum = 0; //m = 과목별 점수 저장; 
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%lf", &m[i]);
        if(m[i] > max){ //max = 최댓값 입력받을 때마다 갱신;
            max = m[i];
        }
    }

    for(int i=0; i<n; i++){
        m[i] = m[i]/max*100; // 원점수를 최대점수로 나눈 후 100배 -> 점수 조작 수식;
        sum += m[i];        //반복 끝날 때까지 나오는 값 모두 덧셈;
    }
    
    printf("%lf\n", sum/n);
    return 0;
}