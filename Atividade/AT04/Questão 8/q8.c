# include <stdio.h> 
# include <stdlib.h>

typedef struct {
	char nome[40];
	int  dia,mes,ano; 
	char cpf[16]; 
	char sexo[10];
} dados; 

dados usuarios; 

dados dados_clientes(char nom[], int dia,int mes,int ano, char cpf, char sx[]){

	dados requ_users; 

	printf ("Digite O Nome Do Cliente:\n"); 
	gets (requ_users.nome); 

	printf ("Digite o Dia Mes e Ano de Nascimento do cliente:\n"); 
	scanf (" %d %d %d ",&requ_users.dia, &requ_users.mes, 
	&requ_users.ano); 

	printf ("Digite o Cpf Do cliente:\n"); 
	gets (requ_users.cpf); 

	printf ("Digite o Sexo Do cliente:\n"); 
	gets (requ_users.sexo);

	return requ_users;  
	
}

int main (){
 	
 	char nomeB[40];
 	int diaB,mesB,anoB; 
 	char cpfB[16];
 	char sexoB[10]; 
 
	dados usuarios = dados_clientes (nomeB,diaB,mesB,anoB,cpfB,sexoB); 

	printf ("O Nome Do cliente é: %s \t",usuarios.nome);
	
	printf ("A data de Nascimento  Do cliente é %d/ %d /%d:\t", usuarios.dia,usuarios.mes, usuarios.ano);
	
	printf ("O cpf Do cliente é:\t",usuarios.cpf);
	
	printf ("O sexo Do cliente é:\t", usuarios.sexo);

return 0; 	
}
