#include <stdio.h>
int main(){
    int g;
    scanf(" %d", &g);
    if(90<=g && g<=100){
        printf("A\n");
    }
    else if(80<=g && g<=89){
        printf("B\n");
    }
    else if(70<=g && g<=79){
        printf("C\n");
    }
    else if(60<=g && g<=69){
        printf("D\n");
    }
    else{
        printf("F\n");
    }
}