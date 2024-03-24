#include <stdio.h>
#include <locale.h>
//Função Multiplicação
         int mult(int a, int b){
         return a*b;
         }
         int main(){
         	 int num1, num2, resultado;
             setlocale(LC_ALL, "Portuguese");//Biblioteca para a acentuação de caracteres...
             printf("insira o primeiro número: ");
                    scanf("%d", &num1);
             printf("insira o segundo número: ");
                    scanf("%d", &num2);
             resultado = mult(num1, num2);//Chamar a função...
             printf("O resultado da multiplicação desses números é %d\n", resultado);
         return 0;                           
         }         
