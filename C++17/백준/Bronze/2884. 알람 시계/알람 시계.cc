#include <stdio.h> 
int main(){
    int h, m;
    scanf(" %d %d", &h, &m);
    if(m<45){
        h--;
        m += 60;
        if(h<0){
            h=23;
        }
    }
    m -= 45;
    printf("%d %d\n", h, m);
    return 0;
}