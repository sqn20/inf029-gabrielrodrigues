#include <stdio.h>


 int imprimir(int x){
    if (x % 2 != 0){
        printf("O número deve ser par");
        exit(0);
    }
    if (x == 0)
        return x;
   return printf("%d ", imprimir(x - 2));
}
int main(){
    printf("%d", imprimir(8));
    return 0;
}