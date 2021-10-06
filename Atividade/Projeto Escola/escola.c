# include <stdio.h>  
# include <stdlib.h> 
# include <locale.h>

# define QUANTALUN 5
# define Quantprof 5
# define nome_aluno 20
# define nome_profs 20
# define Quant_aluno 5
# define QUANTDISCI 5 


void Inserir_aluno();
void listar_aluno();
void portal_Aluno();
void portal_Prof();
void Inserir_Prof();
void menu_disciplina();
void inserir_disciplina();
void listar_aluno();
void menu_rel();

typedef struct {
    int  matricula[11];
    char nome[nome_aluno];
    char sexo[2];
    int  data[2];
    int  mes[2];
    int  ano[4];
    int  cpf[11];
    
}dadosaluno[QUANTALUN]; 
typedef struct {
    
    int  matricula[11];
    char nome[nome_aluno];
    char sexo[1];
    int  data[2];
    int  mes [2];
    int  ano [4];
    int  cpf [11];
}dadosProf[Quantprof]; 
typedef struct{
    char nome[nome_aluno];
    int  cod[5];
    int  semestre[2];
    char Professor_Disc[nome_aluno];
    
}dadosdisciplina[QUANTDISCI];
void Inserir_aluno(){
    dadosaluno Inserir_alunos; 
    printf ("\t\tDigite a matricula do aluno:\n");
    scanf (" %d ",Inserir_alunos -> matricula);setbuf(stdin,NULL);
        fflush(stdin);
    printf ("\t\t Digite o Nome do Aluno\n"); 
    fgets (Inserir_alunos -> nome, nome_aluno-1, stdin);
        fflush(stdin);
    printf ("\t\tDigite  o Sexo Do Aluno\n"); 
    fgets (Inserir_alunos-> sexo, 2 ,stdin);
        fflush(stdin);
    printf ("\t\tDigite  a  data De nascimento do Aluno\n");
    scanf (" %d %d %d ",Inserir_alunos->data, Inserir_alunos->mes, Inserir_alunos->ano);
        fflush(stdin);
    printf ("\t\tDigite  o  CPF  do Aluno\n");
    scanf (" %d ",Inserir_alunos->cpf);
        fflush(stdin);
}
void listar_aluno(){
    int icont;  
     dadosaluno Inserir_alunos;
    for (icont = 0 ; icont <= Quant_aluno; icont++){
        printf ("_____________________________________________");
        printf (" Nome:\t%d\n", Inserir_alunos -> nome[icont]);
        printf (" matricula\t%d\n", Inserir_alunos->matricula[icont]);
        printf (" Sexo\t%s\n", Inserir_alunos->sexo[icont]);
        printf (" Data de Nascimento %d /  %d / %d \t%d\n", Inserir_alunos->data[icont],Inserir_alunos->mes[icont],Inserir_alunos->ano[icont]);
        printf (" CPF%d /  %d / %d \t%d\n", Inserir_alunos->cpf[icont]);
        printf ("_____________________________________________");
    }
}
void portal_Aluno (){
     int opcao_portal_Aluno = 1; 
     
     int controle_aluno; 
    while(opcao_portal_Aluno != 0  ){ 
     printf ("\t\t Digite a Opção Desejada\n"); 
     printf ("\t\t 1 - Inserir   Aluno\n");
     printf ("\t\t 2 - Excluir   Aluno\n");
     printf ("\t\t 3 - Atualizar Aluno\n");
     scanf(" %d ", &controle_aluno); 
    switch(controle_aluno)
{
    case 1: 
    {
     Inserir_aluno();
     break; 
    }
    case 2: 
   // void excluir_aluno();
    break; 
    
    case 3:
    // void atualizar_aluno();
    break; 
    
    default: 
    {
    printf ("Opção Selecionada Inválida!\n");
    break; 
    }
}    
}
}
void Inserir_Prof(){
    dadosProf Inserir_profss; 
    printf ("\t\tDigite a matricula do Professor:\n");
    scanf (" %d ",Inserir_profss -> matricula);
        fflush(stdin);
    printf ("\t\t Digite o Nome do Professor\n"); 
    fgets (Inserir_profss -> nome, nome_profs-1, stdin);
        fflush(stdin);
    printf ("\t\tDigite  o Sexo Do Professor\n"); 
    fgets (Inserir_profss -> sexo, 2 ,stdin);
        fflush(stdin);
    printf ("\t\tDigite  a  data De nascimento do Professor\n");
    scanf (" %d %d %d ",Inserir_profss->data, Inserir_profss->mes, Inserir_profss->ano);
        fflush(stdin);
    printf ("\t\tDigite  o  CPF  do Professor\n");
    scanf (" %d ",Inserir_profss->cpf);
        fflush(stdin);
}
void portal_Pro(){
    int opcao_portal_Professor = 1; 
     int controle_Professor; 
    while(opcao_portal_Professor != 0  ){ 
     printf ("\t\t Digite a Opção Desejada\n"); 
     printf ("\t\t 1 - Inserir   Professor\n");
     printf ("\t\t 2 - Excluir   Professor\n");
     printf ("\t\t 3 - Atualizar Professor\n");
     scanf(" %d ", &controle_Professor); 
    switch(controle_Professor)
{
    case 1: 
    {
     Inserir_Prof();
     break; 
    }
    case 2: 
   // void excluir_aluno();
    break; 
    
    case 3:
    // void atualizar_aluno();
    break; 
    
    default: 
    {
    
    printf ("Opção Selecionada Inválida!\n");
    break; 
    }
}    
}
}
void inserir_disciplina(){
    dadosdisciplina inserir_disciplinas;
    
    printf ("\t\tDigite o nome da matéria :\n");
    fgets (inserir_disciplinas -> nome,nome_aluno - 1,stdin);
     fflush(stdin);
    printf ("\t\tDigite o Código da Disciplina:\n");
    scanf ("%d", &inserir_disciplinas -> cod);
     fflush(stdin);
    printf ("\t\tDigite o semestre da Disciplina:\n");
    scanf (" %d ",&inserir_disciplinas -> semestre);
     fflush(stdin);
    printf ("\t\tDigite o nome do Professor da  matéria :\n");
    fgets (inserir_disciplinas->Professor_Disc, nome_aluno -1,stdin);
    
}
void menu_disciplina(){
    int menu_disciplinas = 1; 
    int controle_Disciplina; 
    
    while (menu_disciplinas != 0){
        printf ("\t\t =====> Menu Disciplinas <=========\n"); 
        printf ("\t\t Digite a Opção Desejada\n  ");
        printf ("\t\t 1 - Inserir   Disciplina\n ");
        printf ("\t\t 2 - Excluir   Disciplina\n ");
        printf ("\t\t 3 - Atualizar Disciplina\n ");
        scanf ("%d",&controle_Disciplina);
        
        switch(controle_Disciplina){
    
            case 1:
            {
                 fflush(stdin);
            inserir_disciplina();    
                break;    
            }
            case 2:
            {
           // falta fazer     excluir_disciplina();
                break;    
            }
            case 3:
            {
          // falta fazer      atualizar_disciplina(); 
                 break;    
            }

            default: {
            printf ("\t\t Opção Inválida"); 
            break; 
                
            }
            
        }
        
        
    }
    
    
}
void menu_rel(){
     int menu_relatorios = 1; 
    int controle_relatorios; 
    
    while (menu_relatorios != 0){
        printf ("\t\t =====> Menu relatorios <=========\n"); 
        printf ("\t\t Digite a Opção Desejada\n");
        printf ("\t\t 1 - Listas   Alunos\n ");
        //printf ("\t\t 2 - Excluir   Disciplina\n ");
        //printf ("\t\t 3 - Atualizar Disciplina\n ");
        scanf ("%d",&controle_relatorios);
        
        switch(controle_relatorios){
             fflush(stdin);
            case 1:
            {
                 fflush(stdin);
             void listar_aluno();
                break;    
            }
            case 2:
            {
           // falta fazer     excluir_disciplina();
                break;    
            }
            case 3:
            {
          // falta fazer      atualizar_disciplina(); 
                 break;    
            }

            default: {
            printf ("\t\t Opção Inválida"); 
            break; 
                
            }
            
        }
        
        
    }
    
}

int main (){
    setlocale(LC_ALL, "Portuguese");
    
    int menu_principal = 1;
    
    while(menu_principal!=0){
        int opcoes_menu; 
        
        printf ("* PROJETO ESCOLA *\n"); 
        printf ("\t\tDigite a Opção Desejada\n"); 
        printf ("\t\t1 - Cadastrar  Aluno\n");
        printf ("\t\t2 - Cadastrar  Professor\n");
        printf ("\t\t3 - Cadastrar Disciplina\n");
        printf ("\t\t4 - Relatórios\n");
        scanf ("%d",&menu_principal); 
        
        
        switch(menu_principal){
            case 1: 
             fflush(stdin);
           portal_Aluno();
            fflush(stdin);
            break; 
            case 2: 
             fflush(stdin);
            portal_Pro(); 
             fflush(stdin);
            break; 
            case 3:
             fflush(stdin);
             menu_disciplina();
              fflush(stdin);
            break;
            case 4:
        menu_rel();
            break; 
            
            default:
            {
            printf ("Opção Inválida\n");
            break; 
            }
            
        }
    }
    return 0; 
}