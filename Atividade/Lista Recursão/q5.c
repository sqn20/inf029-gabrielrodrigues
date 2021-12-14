#include <stdio.h>
#include <stdlib.h>
#define  Tam 10

int rec(int n){
    if (n == 1)
        return n;
    return n + rec(n -1);
}
int main(){

    printf("%d", rec(Tam));
    
    return 0;
}