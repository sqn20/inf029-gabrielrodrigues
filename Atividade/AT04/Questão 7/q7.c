# include <stdio.h>
# include <stdlib.h> 

typedef struct{

    char p1[35]; 
    char p2[35];
    char p3[35];
    
}palavras; 
palavras montagem;

palavras entrada_palavras(char p[],char s[], char t[]){
    
    palavras entrada_3_palavras;  
    
    printf ("Digite a Palavra:\n");
    gets (entrada_3_palavras.p1);
    
    printf ("Digite a Palavra:\n");
    gets (entrada_3_palavras.p2);
    
    printf ("Digite a Palavra:\n");
    gets (entrada_3_palavras.p3);
        
        return entrada_3_palavras;
    
}

int main(){
    char p1[40],p2[40],p3[40];  
    
    palavras montagem = entrada_palavras(p1,p2,p3); 
    
    printf ("A primeira palavras %s\n",montagem.p1);
    printf ("A Segunda  palavras %s\n",montagem.p2);
    printf ("A Terceira palavras %s\n",montagem.p3);

    
}



    

