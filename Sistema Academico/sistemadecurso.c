/*  projeto feito durando meu curso de Ciência da Computção
( Não coloquei acentuação para facilitar...
   infelizmente não pega muito bem o "locale.h" no VsCode ) */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int OpMenuPrinc, OpSubMenuCad, OpSubMenuImp;
int matricula, matriculaprof, codigoDisc, codigoCurso;
char nome[50], nomeprof[50], nomeDisc[50], nomeCurso[50];
float NotaBM1, NotaBM2;
int IdLanc;

FILE *arquivo;
char nomearquivo[40], disciplina[40];
char str[80];

//Seria para criar uma pasta específica e guarda as informações
void criarArquivo() {
    printf("Informe o nome do arquivo: Ex. Aluno.txt \n");
    scanf("%s", nomearquivo);
    sprintf(str, "C://temp//%s", nomearquivo);
    arquivo = fopen(str, "w+");
    if (arquivo == NULL) {
        printf("Erro na geração do arquivo.\n");
    } else {
        printf("Arquivo gerado com sucesso!\n");
        fclose(arquivo);
    }
}

//Menu Principal com 4 comandos específicos de controle de sistema academico
void MenuPrincipal(){
	printf("+----------------------------------+\n");
	printf("|   SISTEMA DE CONTROLE ACADEMICO  |\n");
    printf("+----------------------------------+\n");
	printf("|   1-CADASTROS  | 2-IMPRESSAO     |\n");
	printf("+----------------------------------+\n");
	printf("|   3-CONTEUDOS  | 4-NOTAS         |\n");
	printf("+----------------------------------+\n");
}

//Menu de Cadastro, informações ficaria guagado nas pastas criadas
void SubMenuCadastro(){
do{	
    printf("+----------------------------------+\n");
	printf("|       MODULO DE CADASTRO         |\n");
    printf("+----------------------------------+\n");
	printf("|   1-ALUNO      | 2-PROFESSOR     |\n");
	printf("+----------------------------------+\n");
	printf("|   3-DISCIPLINA | 4-CURSO         |\n");
	printf("+----------------------------------+\n");
	printf("Informe o comando desejada ou 5 para Volta ao Menu Principal\n");
    scanf("%i", &OpSubMenuCad);	
    switch(OpSubMenuCad){
		case 1:
			system("cls");
			criarArquivo();
			printf("Informe a matricula do aluno\n");
			scanf("%i", &matricula);
			printf("Informe o nome do aluno\n");
			scanf("%s", nome);
			break;
		case 2:
			system("cls");
            criarArquivo();
			printf("Informe a matricula do Professor\n");
			scanf("%i", &matriculaprof);
			printf("Informe o nome do Professor\n");
			scanf("%s", nomeprof);
			break;
		case 3:
			system("cls");
            criarArquivo();
			printf("Informe o codigo da disciplina\n");
			scanf("%i", &codigoDisc);
			printf("Informe a descricao da disciplina\n");
			scanf("%s", nomeDisc);
			break;
		case 4:
			system("cls");
            criarArquivo();
	     	printf("Informe o codigo do curso\n");
			scanf("%i", &codigoCurso);
			printf("Informe o nome do curso\n");
			scanf("%s", nomeCurso);
			break;
			
	}
}while(OpSubMenuCad!=5);
  system("cls");
  MenuPrincipal();
  printf("Informe o comando desejada ou 5 para Sair\n");
  scanf("%d", &OpMenuPrinc); 
}

//Relação sobre o Aluno Cadastrado
void ImprimirDadosAluno(){
	system("cls");
	printf("+=====================================+\n");
	printf("|   RELACAO NOMINAL DE ALUNOS         |\n");
	printf("+-------------------------------------|\n");
	printf("| Matricula   |  Nome do Aluno        |\n");
	printf("+-------------------------------------|\n");
	printf("|  %i         |  %s                   |\n", matricula, nome);
	printf("+=====================================|\n");
    printf("|             N  Pag                  |\n");	
	printf("+-------------------------------------|\n");
}

//Atualizar o Boletim do Aluno
void LancarNotas(){
	ImprimirDadosAluno();
	printf("Informe a matricula do aluno\n");
	scanf("%d", &IdLanc);
	printf("Informe a primeira nota bimestral\n");
	scanf("%f", &NotaBM1);
	printf("Informe a segunda nota bimestral\n");
	scanf("%f", &NotaBM2);
	printf("Informe o nome da disciplina\n");
	scanf("%s", disciplina);
}

//Relação do Conteudo aprensentado
void ImprimirDadosConteudo(){
 	printf("Desenvolvendo...\n");
	printf("Informe outro comando:\n\n");
	
}

//Relação das Disciplina expostas para os Alunos
void ImprimirDadosDisciplina(){
	system("cls");
	printf("+=====================================+\n");
	printf("|   RELACAO DE DISCIPLINAS DO CURSO   |\n");
	printf("+-------------------------------------|\n");
	printf("|    CODIGO    |      DESCRICAO       |\n");
	printf("+-------------------------------------|\n");
	printf("|    %i         | %s                  |\n", codigoDisc, nomeDisc);
	printf("+=====================================|\n");
    printf("|             N  Pag                  |\n");	
	printf("+-------------------------------------|\n");
	
}

//Impressão do Boletim Escolar do Aluno
void ImprimirBoletim(){
	printf("+============================================+\n");
	printf("|          BOLETIM ESCOLAR DO ALUNO          |\n");
	printf("+-------------------------------------------+|\n");
    printf("|    Matricula    |   Aluno  |     NOTAS     |\n");
	printf("+-------------------------------------------+|\n");
	printf("|    Disciplina  %s                          |\n", nomeDisc);
	printf("+-------------------------------------------+|\n");
	printf("|     %i      |   %s   |   1 BM   |   2 BM   |\n",matricula, nome);
	printf("|+------------------------------------------+|\n");
    printf("|                           %.2f  |   %.2f   |\n",NotaBM1,NotaBM2);	
	printf("|+------------------------------------------+|\n");
    printf("+============================================+\n");
    printf("|                N  BOLETIM %d               |\n", IdLanc);	
	printf("+============================================+\n");
	
}

//Menu de Impressao com 4 comando específicos
void SubMenuImpressao(){
do{	
    printf("+----------------------------------+\n");
	printf("|     MODULO DE IMPRESSAO          |\n");
    printf("+----------------------------------+\n");
	printf("|   1-ALUNO      | 2-CONTEUDO      |\n");
	printf("+----------------------------------+\n");
	printf("|   3-DISCIPLINA | 4-BOLETIM       |\n");
	printf("+----------------------------------+\n");
	printf("Informe o comando desejada ou 5 para Volta ao Menu Principal\n");
    scanf("%i", &OpSubMenuImp);
    switch(OpSubMenuImp){
		case 1:
			system("cls");
			ImprimirDadosAluno();
			break;
		case 2:
			system("cls");
			ImprimirDadosConteudo();
			break;
		case 3:
			system("cls");
			ImprimirDadosDisciplina();
			break;
		case 4:
			system("cls");
			ImprimirBoletim();
			break;
	}
}while(OpSubMenuImp!=5);
  system("cls");
  MenuPrincipal();
	
}	


int main(){ 
	setlocale(LC_ALL,"" ); //Portuguese_Brazil
do{	
	MenuPrincipal();
	printf("Informe o comando desejada ou 5 para Sair\n");
    scanf("%d", &OpMenuPrinc);
	
	switch(OpMenuPrinc){
		case 1:
			system("cls");
			SubMenuCadastro();
			break;
		case 2:
			system("cls");
			SubMenuImpressao();
		    break;
		case 3:
			system("cls");
			ImprimirDadosConteudo();
			break;
		case 4:
			system("cls");
			LancarNotas();
			break;	
	}
    
}while(OpMenuPrinc!=5);

}