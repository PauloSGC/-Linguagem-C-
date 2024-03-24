#include <stdio.h>
#include <locale.h>
#include <math.h>
//Função IMC de uma pessoa.
	float imc(float peso, float altura){
		return peso/(altura*altura);
	}
	int main(){
	setlocale(LC_ALL,"Portuguese");
		float peso, altura, resultado;
			printf("Digite a seu peso:");
			scanf("%f", &peso);
			printf("Digite a sua altura:");
			scanf("%f", &altura);
				resultado = imc(peso, altura);
				printf("O seu IMC é: %f", resultado);
	return 0;
	}		
