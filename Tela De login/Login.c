#include <stdio.h>
#include <windows.h>
#define inicio_login "*** LOGIN ***\n"
#define inicio_cadastro "*** CADASTRO ***\n"

int OpMenuPrinc;
char sua_senha[50], ver_senha[50], seu_user[50], ver_user[50];

/* Menu Principal da tela de Login */
void MenuPrincipal(){
	printf("=======================\n");
	printf("\n*** Pagina de Login ***\n");
	printf("1- Login  | 2- Cadastro\n");
	
}

/* Menu de cadastros para novos usuarios */
void cadastro(){

	printf(inicio_cadastro);
	printf("Crie seu nome de Usuario: ");
	scanf("%s", &seu_user);
	printf("Crie sua senha:");
	scanf("%s", &sua_senha);
	system("cls");
}

/* A "tela de Login" */
void login(){
	printf(inicio_login);
	printf("Digite seu Usuario: ");
	scanf("%s", &ver_user);
	printf("Digite sua senha:");
	scanf("%s", &ver_senha);
	
	//para deixar o sistema mais intruitivo
	printf(".... Verificando usuario\n");
		Sleep(850);
		printf(".... Verificando senha\n");
		Sleep(850);

	if ( strcmp(sua_senha, ver_senha) == 0 && strcmp(seu_user, ver_user) == 0){
		printf("Acesso Liberado! \n");
		printf("Seja Bem-vindo(a) %s! \n", seu_user);
	} else {
		printf("Usuario ou Senha Errado! \n");
		printf("Tente Novamente \n");
		printf("Novo aqui? Cadastre-se! \n");
	}
	


}

// Para saber qual comando foi acessado
int main(){

	do{ MenuPrincipal();
		printf("3- Sair / Voltar \n");
		printf("=======================\n");
		printf("\n"); // so par fica bonitinho e n fica grudado
		printf("Informe o comando: ");
		scanf("%d", &OpMenuPrinc);

	switch (OpMenuPrinc){
	case 1:
		system("cls");
		login();
		break;
	case 2:
		system("cls");
		cadastro();
		break;
	default:
		break;
	}

	} while (OpMenuPrinc != 3);

	return 0;
}
