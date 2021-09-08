# include <stdio.h>
# include <stdlib.h> 

char* ler_letras(char p, char s, char t){
    char *c; 
    
    c = (char*)malloc (3 * sizeof(char));
    
    c[0] = p;
    c[1] = s;
    c[2] = t;
    
    return c;     
}

int main(){
    char p,s,t; 
    char *operador;
    
    printf (" Digite a Letra:\n"); 
    scanf ("%c", &p); 
    
   
    
    printf (" Digite a Letra:\n"); 
    scanf (" %c", &t);
    
   
    
    printf (" Digite a Letra:\n"); 
    scanf (" %c", &t);
    
    
    operador = ler_letras(p,s,t); 
    
    printf ("A Primeira Letra %c\n",operador[0]);
    printf ("A Segunda  Letra %c\n",operador[1]);
    printf ("A Terceira Letra %c\n",operador[2]);
    
    free(operador); 
    return 0;  
    
}
