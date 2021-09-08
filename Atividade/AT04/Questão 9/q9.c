# include <stdio.h> 
# include <stdlib.h>

typedef struct {
	char nome[40];
	int  dia,mes,ano; 
	char cpf[11]; 
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

char aval_nome (char comp[], char indicador[]){

int avaliador; 
avaliador = strlen(comp);

if (avaliador < 20)
	strcpy (indicador,"O Nome Foi Validado!");

if (avaliador >20)
	strcpy (indicador, "Nome Excede 20 letras");
}


char aval_cpf (char compB[], indicador[B]){
	int avaliadorB; 
	avaliadorB = strlen (compB);

	if (avaliadorB==11) 
		strcpy (indicadorB,"O Cpf Foi Validado!");	
	if (avaliadorB!=11)
		strcpy (indicadorB,"O Cpf Excede ou não tem 11 digitos!");
}

char aval_sexo (char compC[], indicadorC[]){
	
	int avaliadorC; 
	avaliadorC = strlen(compC);

	if (avaliadorC == 'h'||avaliadorC == 'f')
		strcpy (indicadorC,"O sexo Foi Validado!");
	if (avaliadorC != 'h'||avaliadorC != 'f')
		strcpy (indicadorC,"O sexo Não Foi Validado!");
}

ind aval_data (int d,int m,int a){
	
	if (("d <= 31") && (m <= 12) && (a !=0)
		printf ("A Data Foi Validada"); 
	if ((("d != 31") && (m != 12) && (a =0))
		printf ("A Data  Não Foi Validada");
}



int main (){
 	
 	char nomeB[40];
 	int diaB,mesB,anoB; 
 	char cpfB[16];
 	char sexoB[10]; 
 
	dados usuarios = dados_clientes (nomeB,diaB,mesB,anoB,cpfB,sexoB); 

	
	char validador_nome[20];
	aval_nome(usuarios.nome,validador_nome);	
	printf ("O Nome Do cliente é: %s \t",usuarios.nome);
	

	aval_data(usuarios.dia,usuarios.mes,usuarios.ano);	
	printf ("A data de Nascimento  Do Cliente é %d/ %d /%d:\t", usuarios.dia,usuarios.mes, usuarios.ano);


	char validados_cpf[15]; 
	aval_cpf(usuarios.cpf,validador_cpf);	
	printf ("O cpf Do cliente é:\t",usuarios.cpf);
	


	char validados_sexo[3];
	aval_sexo(usuarios.sexo,validador_sexo);
	printf ("O sexo Do cliente é:\t", usuarios.sexo);

return 0; 	
}