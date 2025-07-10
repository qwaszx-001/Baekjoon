#include <stdio.h>
int main(){
    
    int a, b, c;
    scanf(" %d %d %d", &a, &b, &c);
    if(a == b && b == c){
        printf("%d\n", 10000 + a * 1000);
    }
    else if(a == b || a == c || b == c){
        int same;
        if(a == b || a == c) same = a;
        else same = b;
        printf("%d\n", 1000 + same * 100);
    }
    else{
        int max = a;
        if(max < b) max = b;
        if(max < c) max = c;
        printf("%d\n", max*100);
    }
    return 0;
}