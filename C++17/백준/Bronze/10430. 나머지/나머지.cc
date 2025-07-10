#include <stdio.h> //(A+B)%C, ((A%C)+(B%C))%C, (A×B)%C, ((A%C)×(B%C))%C
int main(){
    long a, b, c;
    scanf(" %ld %ld %ld", &a, &b, &c);
    printf("%ld\n%ld\n%ld\n%ld\n",((a+b)%c),(((a%c)+(b%c))%c),((a*b)%c),(((a%c)*(b%c))%c));
}