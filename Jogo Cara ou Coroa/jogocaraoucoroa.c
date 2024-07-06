/* Projeto em c apenas para aprendizado 
   não deve ser levado a sério! */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#define inicio "\n*** Jogo Cara ou Coroa ***\n"

int main() {
	int sua_escolha, num;

    // Inicializar o gerador de números aleatórios
    srand(time(NULL));

	do{
		printf(inicio);
		printf("Escolha um Lado! (1-Cara / 2-Coroa): ");
		scanf("%d", &sua_escolha);
		if (sua_escolha != 1 && sua_escolha != 2){
			// Para caso a opção escolhida seja invalida
			printf("ERRO, Comando Invalido, Tente novamente\n");
		} else {

			// Inicio do Fornecendo o resultado
			printf("... Resultado: ");
			Sleep(850);

			// Sortear cara ou coroa
			int resultado = rand() % 2;

			// Exibir o resultado
			if (resultado == 0) {
				printf("Cara\n");
			} else {
				printf("Coroa\n");
			}
			// Para Começar uma nova partida
			printf("=========== \n5 para sair \n3 para ir novamente \nDigite o comando: ");
			scanf("%d", &num);
		}

	} while (num != 5);
	

    return 0;
}