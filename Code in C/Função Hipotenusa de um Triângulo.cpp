#include <stdio.h>
#include <locale.h>
#include <math.h>
//Função Hipotenusa de um Triângulo
	float hipotenusa (float cateto1, float cateto2)//Declarar o tipo da minha função "flaot", e as variáveis também.
        {
	return sqrt(cateto1 * cateto1 + cateto2 * cateto2);//Após o dado recebido, retornará e efetuará a operação.
	}
	int main(){
		setlocale (LC_ALL, "Portuguese");//biblioteca que permite a acentuação dos caracteres.
		float cateto1, cateto2, resultado;//Declaração das variáveis para receber os dados.
			printf("Digite o cateto oposto: ");
			scanf("%f", &cateto1);
			printf("Digite o cateto adjacente: ");
			scanf("%f", &cateto2);
			resultado = hipotenusa(cateto1, cateto2);//Armazena a função na variável "resultado".
			printf("A hipotenusa do triângulo é: %2.f\n", resultado);
	return 0;		
	}
