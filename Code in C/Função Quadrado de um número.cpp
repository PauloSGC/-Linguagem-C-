#include<stdio.h>
#include<locale.h>
//Fun��o:Quadrado de um n�mero
	int quad(int a){
	return a*a;
	}
		int main(){
			setlocale(LC_ALL, "Portuguese");
			int num1, resultado;
				printf("Insira um n�mero para ser multiplicado pelo mesmo: ");
				scanf("%d", &num1);
		resultado = quad(num1);//Chamar a fun��o...
		printf("O quadrado do n�mero �: %d\n", resultado);
		return 0;	
	}
