/* Projeto em c apenas para aprendizado 
   não deve ser levado a sério! */

#include <stdio.h>
#define inicio "*** Boletim Escolar ***\n"
#define doletim "\n*** Seu Boletim ***\n"

int main(){
	float nota1, nota2, media, med, med_min;

	//leitura das notas, média e média minima escolar
	printf(inicio);
	printf("Qual foi a sua 1 nota? \n");
	scanf("%f", &nota1);

	printf("Qual foi a sua 2 nota? \n");
	scanf("%f", &nota2);

	printf("Qual a media da sua Escola? \n");
	scanf("%f", &med);

	printf("Qual a media minima da sua Escola? \n");
	scanf("%f", &med_min);

	//calculo basico para saber a media do aluno
	media = (nota1 + nota2) / 2;

	//Mini boletim do aluno
	printf("doletim\n");
	printf("| Nota 1: %.2f \n| Nota 2: %.2f\n", nota1, nota2);
	printf("| Sua Media: %.2f\n", media);

	if (media >= med){
		printf("| Aprovado(a)! \n");
	} else if (media >= med_min && media < med){
		printf("| Voce esta de prova final! \n");
	} else {
		printf("| Reprovado(a)! \n");
	}

	return 0;
}
