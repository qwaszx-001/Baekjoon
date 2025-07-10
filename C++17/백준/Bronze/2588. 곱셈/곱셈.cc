#include <stdio.h> //(A+B)%C, ((A%C)+(B%C))%C, (A×B)%C, ((A%C)×(B%C))%C
int main(){
    int a, b;
    scanf(" %d", &a);
    scanf(" %d", &b);
    int ones = b%10;
    int tens = ((b/10)%10);
    int hunds= b/100;

    printf("%d\n%d\n%d\n%d\n", (a*ones),(a*tens),(a*hunds),((a*ones)+((a*tens)*10)+((a*hunds)*100)));
}