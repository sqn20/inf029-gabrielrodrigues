#include <stdio.h>
#define teste1 123
#define teste2 1564
#define teste3 654

int func_inver(int num){
    if(num>=0 && num<10) 
        return num;
    else {
        printf("%d", num % 10);
        num = num / 10;
        return func_inver(num);
    }
}

int main(){
    printf("%i\n",func_inver(teste1));
    printf("%i\n",func_inver(teste2));
    printf("%i\n",func_inver(teste3));
}