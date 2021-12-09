#include <stdio.h>
#include <stdlib.h>
#include "estruturaVetores.h"

No vetorPrincipal[TAM];
int *nulo = NULL;
/*
Objetivo: criar estrutura auxiliar na posição 'posicao'.
com tamanho 'tamanho'

Rertono (int)
    SUCESSO - criado com sucesso
    JA_TEM_ESTRUTURA_AUXILIAR - já tem estrutura na posição
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    SEM_ESPACO_DE_MEMORIA - Sem espaço de memória
    TAMANHO_INVALIDO - o tamanho deve ser maior ou igual a 1
*/
int criarEstruturaAuxiliar(int posicao, int tamanho)
{
    int retorno = 0;
    // a posicao pode já existir estrutura auxiliar
	if(posicao >= 1 || posicao <= 10)
    	retorno = JA_TEM_ESTRUTURA_AUXILIAR;
	else
    // se posição é um valor válido {entre 1 e 10}
	if(tamanho < TAM - 1 && tamanho > 10)
    	retorno = POSICAO_INVALIDA;
	else
    // o tamanho ser muito grande
	if(tamanho == NULL)
    	retorno = SEM_ESPACO_DE_MEMORIA;
	else
    // o tamanho nao pode ser menor que 1
	if(tamanho < 1)
    	retorno = TAMANHO_INVALIDO;
    // deu tudo certo, crie
	else
	{
		vetorPrincipal[posicao].auxiliar = tamanho;
		retorno = SUCESSO;	
	}
    

    return retorno;
}

/*
Objetivo: inserir número 'valor' em estrutura auxiliar da posição 'posicao'
Rertono (int)
    SUCESSO - inserido com sucesso
    SEM_ESPACO - não tem espaço
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
CONSTANTES
*/
int inserirNumeroEmEstrutura(int posicao, int valor)
{

    int retorno = 0;
    int existeEstruturaAuxiliar = 0;
    int temEspaco = 0;
    int posicao_invalida = 0;

    if (posicao_invalida)
        retorno = POSICAO_INVALIDA;
    else
    {
        // testar se existe a estrutura auxiliar
        if (existeEstruturaAuxiliar)
        {
            if (temEspaco)
            {
                //insere
				No *aux = malloc(valor);
				vetorPrincipal[posicao] = *aux;
				
                retorno = SUCESSO;
            }
            else
            {
                retorno = SEM_ESPACO;
            }
        }
        else
        {
            retorno = SEM_ESTRUTURA_AUXILIAR;
        }
    }
	
    return retorno;
}
	
/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar no final da estrutura.
ex: suponha os valores [3, 8, 7, 9,  ,  ]. Após excluir, a estrutura deve ficar da seguinte forma [3, 8, 7,  ,  ,  ].
Obs. Esta é uma exclusão lógica

Rertono (int)
    SUCESSO - excluido com sucesso
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int excluirNumeroDoFinaldaEstrutura(int posicao)
{
	int retorno;
	if(vetorPrincipal[posicao].auxiliar == NULL)
	{
		vetorPrincipal[posicao].auxiliar = NULL;
		retorno = ESTRUTURA_AUXILIAR_VAZIA;
	}
	else
	if(posicao == 0)
	{
		retorno = SEM_ESTRUTURA_AUXILIAR;
	}
	else
	if(posicao > TAM - 1 || posicao < TAM + 1)
	{
		retorno = POSICAO_INVALIDA;
	}
	else
	{
		vetorPrincipal[posicao].auxiliar = NULL;
		retorno = SUCESSO;
	}
    
    return retorno;
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar

*/
int excluirNumeroEspecificoDeEstrutura(int posicao, int valor)
{
	int retorno = 0;
	for(int iCont = 0; iCont < valor; iCont++)
	{
		if(vetorPrincipal[posicao].conteudo == 0)
		{
			vetorPrincipal[posicao].auxiliar = NULL;
		}
		retorno = SUCESSO;	
	}
	
    return retorno;
}

// se posição é um valor válido {entre 1 e 10}
int ehPosicaoValida(int posicao)
{
    int retorno = 0;
    if (posicao < 1 || posicao > 10)
    {
        retorno = POSICAO_INVALIDA;
    }
    else
        retorno = SUCESSO;

    return retorno;
}
/*
Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux

Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
	int retorno  = 0;
	if(vetorPrincipal[posicao].auxiliar != NULL)
	{
		int iCont = 1;
		while(iCont < TAM)
		{
			printf("%d\n", vetorAux[iCont]);
			iCont++;
		}
		retorno = SUCESSO;	
	}
	else
	if(vetorPrincipal[posicao].conteudo == 0)
	{
		retorno = SEM_ESTRUTURA_AUXILIAR;
	}
	else
		retorno = POSICAO_INVALIDA;
    

    return retorno;
}

/*
Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/
int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[])
{
	if(vetorPrincipal[posicao].auxiliar != NULL)
	{
		int iCont = 0;
		int aux;
		int jCont = iCont + 1;
		while(iCont < sizeof(vetorAux) - 1)
		{
			if(vetorAux[iCont] > vetorAux[jCont])
			{
				aux = vetorAux[iCont];
				vetorAux[iCont] = vetorAux[jCont];
				vetorAux[jCont] = aux;	
			}
			iCont++; jCont++;
		}
			
	}
    int retorno = 0;

    return retorno;
}

/*
Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

	int iCont = 0;
	int jCont = 0;
	while(iCont < TAM)
	{
		if(vetorPrincipal[iCont].auxiliar != NULL);
		{
			printf("-- %d\n", vetorAux[jCont]);
		}
		iCont++;
	}
    int retorno = SUCESSO;
    return retorno;
}

/*
Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux

Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[])
{

    int iCont = 0;
	int jCont = 0;
	int kCont = jCont + 1;
	int aux;
	while(iCont < TAM)
	{
		if(vetorPrincipal[iCont].conteudo != 0);
		{
			while(jCont < sizeof(vetorAux) - 1)
			{
				if(vetorAux[iCont] > vetorAux[kCont])
				{
					aux = vetorAux[jCont];
					vetorAux[jCont] = vetorAux[kCont];
					vetorAux[kCont] = aux;	
				}
				jCont++;
			}
			printf("-- %d\n", vetorAux[jCont]);
		}
		iCont++;
	}
    int retorno = SUCESSO;
    return retorno;
}

/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1

Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/
int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho)
{
	vetorPrincipal[posicao].conteudo = malloc(novoTamanho);
	
    int retorno = SUCESSO;
    return retorno;
}

/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.

Retorno (int)
    POSICAO_INVALIDA - posição inválida
    SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/
int getQuantidadeElementosEstruturaAuxiliar(int posicao)
{

    int retorno = 0;
	int iCont;
	int contador = 0;
	for( iCont = 1; iCont <= TAM; iCont++ )
	{
		if(vetorPrincipal[posicao].conteudo != 0)
		{
			contador++;
		}
	}
	
	retorno = contador;

    return retorno;
}

/*
Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.

Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote
*/
No *montarListaEncadeadaComCabecote(void)
{
	return NULL;
}

/*
Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
Retorno void
*/
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
	//OBS: N\E3o consegui assimilar esse assunto. Faltou mais dedica\E7\E3o da minha parte.
	int iCont;
	for(iCont = 0; iCont < inicio->auxiliar; iCont++)
	{
		int jCont;
		for(jCont = 0; jCont < sizeof(vetorAux); jCont++)
		{
			printf("%d\n", vetorAux[jCont]);
		}
	}
		
}

/*
Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
O ponteiro inicio deve ficar com NULL.

Retorno 
    void.
*/
void destruirListaEncadeadaComCabecote(No **inicio)
{
	//OBS: N\E3o consegui assimilar esse assunto. Faltou mais dedica\E7\E3o da minha parte.
}

/*
Objetivo: inicializa o programa. deve ser chamado ao inicio do programa 

*/

void inicializar()
{
	printf("***ESTRUTURA DE N\DAMEROS***\n\n");
	
}

/*
Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das Nos auxiliares.

*/

void finalizar()
{
	printf("***PROGRAMA ENCERRADO***\n\n");
}