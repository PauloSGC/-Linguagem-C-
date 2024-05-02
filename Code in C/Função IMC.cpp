#include <stdio.h>
#include <locale.h>
#include <math.h>
//Função IMC de uma pessoa.
	float imc(float peso, float altura){
		return peso/(altura*altura);//Definindo o retorno para executar a operação.
	}
	int main(){//Criando a minha função principal
	setlocale(LC_ALL,"Portuguese");
		float peso, altura, resultado;//Definindo a minha variável para receber os valores e chamar a função.
			printf("Digite a seu peso:");
			scanf("%f", &peso);
			printf("Digite a sua altura:");
			scanf("%f", &altura);
				resultado = imc(peso, altura);//Chamando a função 
				printf("O seu IMC é: %f", resultado);
	return 0;
	}		
