#include <stdio.h>

int main() {
	float media, frequencia;
	
	printf("=== SISTEMA DE CLASSIFICACAO ACADEMICA ===\n");
	printf("Digite a media final do aluno (0 a 10): ");
	scanf("%f", &media);
	
	printf("Digite a frequencia do aluno (0 a 100%): ");
	scanf("%f", &frequencia);
	
	if(media < 0.0 || media > 10.0 || frequencia < 0.0 || frequencia > 100.0) {
		printf("\nErro: Media ou frequencia fora do intervalo permitido!\n");
	} else if(frequencia < 75.0){
		printf("\nClassificacao: REPROVADO AUTOMATICAMENTE (abaixo dos 75%).\n");
	} else if(media == 10.0 && frequencia == 100.0){
		printf("\nClassificacao: EXCELENCIA (Aluno 10/10).\n");
	} else if(media >= 7.0){
		printf("\nClassificacao: APROVADO.");
	} else if(media >= 5.0){
		printf("\nClassificacao: RECUPERACAO.\n");
	} else{
		printf("\nClassificacao: REPROVADO.\n");
	}
	
    return 0;
}

