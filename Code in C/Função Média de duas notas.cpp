#include<stdio.h>
#include<locale.h>
#include<math.h>
//Funçõa Média de duas notas.
	float media(float n1, float n2, float n3) //Estabelecendo a filuncao para a media e valores.
	{
		return(n1+n2+n3)/3;
	}
	int main()
	{
		setlocale(LC_ALL, "Portuguese");
		float n1, n2, n3, resultado;
			printf("Insira a sua nota N1: ");
				scanf("%f", &n1);
			printf("Insira a sua nota N2: ");
				scanf("%f", &n2);
			printf("Insira a sua nota N3: ");
				scanf("%f", &n3);
		        resultado = media(n1, n2, n3);
			printf("A média é: %f\n", resultado);
		return 0;	
	}
