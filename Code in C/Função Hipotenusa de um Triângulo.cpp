#include <stdio.h>
#include <locale.h>
#include <math.h>
//Fun��o Hipotenusa de um Tri�ngulo
	float hipotenusa (float cateto1, float cateto2){//Declarar o tipo da minha fun��o "flaot", e as vari�veis tamb�m.
	return sqrt(cateto1 * cateto1 + cateto2 * cateto2);//Ap�s o dado recebido, retornar� e efetuar� a opera��o.
	}
	int main(){
		setlocale (LC_ALL, "Portuguese");//biblioteca que permite a acentua��o dos caracteres.
		float cateto1, cateto2, resultado;//Declara��o das vari�veis para receber os dados.
			printf("Digite o cateto oposto: ");
			scanf("%f", &cateto1);
			printf("Digite o cateto adjacente: ");
			scanf("%f", &cateto2);
			resultado = hipotenusa(cateto1, cateto2);//Armazena a fun��o na vari�vel "resultado".
			printf("A hipotenusa do tri�ngulo �: %2.f\n", resultado);
	return 0;		
	}
