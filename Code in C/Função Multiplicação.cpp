#include <stdio.h>
#include <locale.h>
//Fun��o Multiplica��o
         int mult(int a, int b){
         return a*b;
         }
         int main(){
         	 int num1, num2, resultado;
             setlocale(LC_ALL, "Portuguese");//Biblioteca para a acentua��o de caracteres...
             printf("insira o primeiro n�mero: ");
                    scanf("%d", &num1);
             printf("insira o segundo n�mero: ");
                    scanf("%d", &num2);
             resultado = mult(num1, num2);//Chamar a fun��o...
             printf("O resultado da multiplica��o desses n�meros � %d\n", resultado);
         return 0;                           
         }         
