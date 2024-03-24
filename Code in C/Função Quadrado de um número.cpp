#include<stdio.h>
#include<locale.h>
//Função:Quadrado de um número
	int quad(int a){
	return a*a;
	}
		int main(){
			setlocale(LC_ALL, "Portuguese");
			int num1, resultado;
				printf("Insira um número para ser multiplicado pelo mesmo: ");
				scanf("%d", &num1);
		resultado = quad(num1);//Chamar a função...
		printf("O quadrado do número é: %d\n", resultado);
		return 0;	
	}
