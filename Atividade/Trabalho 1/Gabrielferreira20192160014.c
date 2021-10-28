// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Gabriel Rodrigues Ferreira 
//  email:gabrielrf2050@gmail.com
//  Matrícula:20192160014
//  Semestre:02 

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################

#include <stdio.h>
#include "Gabrielferreira<20192160014>.h" // Substitua pelo seu arquivo de header renomeado
#include <stdlib.h>
/*
## função utilizada para testes  ##
 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y)
{
    int soma;
    soma = x + y;
    return soma;
}

/*
## função utilizada para testes  ##
 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //função utilizada para testes
    int fat = 6;
    return fat;
}

int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}

typedef struct DQ
{
    int iDia;
    int iMes;
    int iAno;
    int valido; // 0 se inválido, e 1 se válido 

} DataQuebrada;

DataQuebrada quebraData(char data[]){
    DataQuebrada dq;
    char sDia[3];
	char sMes[3];
	char sAno[5];
	int i;

	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sDia[i] = '\0';  // coloca o barra zero no final
	}else 
		dq.valido = 0;
	

	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;

	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}

	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sMes[i] = '\0';  // coloca o barra zero no final
	}else
		dq.valido = 0;
	

	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}

	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sAno[i] = '\0';  // coloca o barra zero no final
	}else
		dq.valido = 0;

    dq.iDia = atoi(sDia);
    dq.iMes = atoi(sMes);
    dq.iAno = atoi(sAno); 

	dq.valido = 1;
    
    return dq;
}
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char *data)    

    //quebrar a string data em strings sDia, sMes, sAno

    //DataQuebrada dataQuebrada = quebraData(data);
    //if (dataQuebrada.valido == 0) return 0;

    //converter sDia, sMes e sAno em inteiros (ex: atoi)

    //criar as variáveis iDia, iMes, iAno
    //int iAno = atoi(dataQuebrada.sAno);

    //printf("%s\n", data);
{
    int datavalida = 1;
    int dia.a,mes.a,ano.a,Leitor_tamanho; 
    char  Dia.b[]='dd', Mes.b[]='dd', Ano.b[]='dddd'
    int icont,jcont , kcont; 

    Leitor_tamanho = strlen (data);   
            icont = 0; 
    while (data[icont]!='|'){
        Dia.b[icont] = data[icont];
        icont++;
    }
            jcont = icont + 1; 
    while (data[jcont]!='|'){
        Mes.b[jcont] = data[jcont];
        jcont++;
    }
            kcont = jcont + 1;   
    while (data[kcont]!='\0'){
        Ano.b[kcont] = data[kcont];
        kcont++;
    }
    
    dia.a = atoi (Dia.b); 
    mes.a = atoi (Mes.b);
    Ano.b = atoi (Ano.b); 

    
    if  (Ano.b == 0)
    {
        return 0; 
    }

    if ((dia.a < 1 && dia.a >= 30)&&(mes.a > 0 && mes.a <= 12 )&&(ano.a =!0))
    {
        return 1 
    } 
    
    else 
    {
        if ((dia.a < 1 && dia.a >= 28)&&(mes.a == 2)&&(ano.a =!0))
        {
            return 1; 
        }

        if ((dia.a < 1 && dia.a >= 29)&&(mes.a == 2)&& (ano.a =!0)&& ((ano.a/4) == '0')&& ((ano.a/100) != 0)&& ((ano.a/400) == '0'))
        {
         return 1;   
        }
    } 
    
    else {
        if ((dia.a < 1 && dia.a >= 31)&&(mes.a == 1 || mes.a == 3 || mes.a == 5 || mes.a == 7 || mes.a == 8 || mes.a == 10 || mes.a == 12  )&&(ano.a =!0))
        {
            return 1;
        }
    }

    if (datavalida)
        return 1;
    else
        return 0;
}


/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
 */
int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos)
{
    //inicial 16/04/2002 16/04/2002 16/05/2002
    //final   15/05/2002 16/05/2002 15/06/2002
    //         29 dias   30 (1 mês)   30 dias

    //calcule os dados e armazene nas três variáveis a seguir
    int nDias, nMeses, nAnos;


    if (q1(datainicial) == 0)
    { 
        return 2; 
    }

    if (q1(datafinal) == 0)
    { 
        return 3;
    }

    DataQuebrada dqInicial = dataQuebrada(datainicial);
    DataQuebrada dqFim = dataQuebrada(datafinal);

    if (dqInicial.iAno > dqFinal.iAno)
        return 4;
    else (dqInicial.iAno == dqFinal.iAno){
        if (dqInicial.iMes > dqFinal.iMes)
            return 4;
        else if (dqInicial.iMes == dqFinal.iMes){
            if (dqInicial.iDia > dqFinal.iDia)
                return 4;
        } 
    }    

    
    if (dqFinal.iAno == dqInicial.iAno){
            nDias   = ((30 - dqInicial.iDia ) + (30 -dqFinal.iDia));  
    } 
     
    nMeses  = dqFinal.iMes - dqInicial.iMes;
    nAnos   = dqFinal.iAno - dqInicial.iAno ;

    /*mantenha o código abaixo, para salvar os dados  
    nos parâmetros da funcao
    */
    *qtdDias = nDias;
    *qtdAnos = nAnos;
    *qtdMeses = nMeses;

    //coloque o retorno correto
    return qtdDias;
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive)
{
    int qtdOcorrencias = -1;
    repeticao = 0; 

    espace  = strlen (espace);

    if (isCaseSensitive == 1 ){

        for (int icont  = 0 ; icont < espace; icont++){
            if ((texto[icont] == 'd')||((texto[icont+1]== 'a'))){
                qtdOcorrencias++;
            } 
            else (texto[icont] == 'ç'){
                texto[icont] = 'c';
                    qtdOcorrencias++;   
            }
        }
    }
    return qtdOcorrencias;
}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;
 */
int q4(char *strTexto, char *strBusca, int posicoes[30])
{
    int qtdOcorrencias = -1;
    int qtdOcorrencias = 0 , Tam_text = 0, Tam_pesq = 0 ;
    int icont,jcont,kcont; 
    char controlador[Tam_pesq];
     Tam_text = strlen (strTexto);
     Tam_pesq = strlen (strBusca);

     for(icont = 0 ; icont < Tam_text;icont++ ){
            controlador[icont] = 0 ;
     }
    for (jcont = 0; jcont < Tam_text;jcont++){

        for (kcont = 0; kcont< Tam_pesq; Tam_pesq++){

        }
    }

    return qtdOcorrencias;
}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num)
{
    int invertido = 0,clone_num,icont; 
        clone_num = num; 

    while (clone_num > 0){
        clone_num = clone_num/10;
            dig++;   
    }
        int controlador[dig]; 
        clone_num = 0; 
        clone_num = num;

    for (icont = 0 ; icont <= dig;icont++){
        controlador[dig] = (clone_num%10); 
        clone_num = (clone_num/10);          
    }

    for (kcont = 0 ; kcont < dig ;kcont++){
        invertido = (invertido +  controlador[kcont])*10; 
        num = invertido/10; 
    }
    
    return num;
}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca)
{
    int qtdOcorrencias;
    int controlador,controlador_dois,  Quantid_digitos; 
    int icont,kcont,jcont; 
    int Tam_numbase; 
    
        controlador = numerobase; 

    while (controlador!=0){
        controlador = controlador/10; 
        Quantid_digitos++; 

    }
 
    controlador_dois = numerobase;  

    for (icont = 0 ; icont < Quantid_digitos; icont++){
        Tam_numbase[Quantid_digitos] = (controlador%10); 
        controlador_dois = controlador_dois/10;     
    }

    for (jcont = 0 ; jcont <=Quantid_digitos;jcont++){
        controlador = 0; 
            for (kcont = jcont ; kcont <= Quantid_digitos;kcont++){
                controlador = controlador + controlador_dois[kcont];
                    if (numerobase==(controlador/10)){
                        qtdOcorrencias++;
                    }
            }
    }
    return qtdOcorrencias;
}