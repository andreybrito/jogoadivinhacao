#include <stdio.h>

    //imprime a multiplicação das duas variaveis inteiras

    int main(){

	int x, y, resultado;
 
        printf("Digite o valor de x: ");
	scanf("%d", &x);

	printf("Digite o valor de y: "); 
    	scanf("%d", &y);

	resultado = x * y;

	printf("O resultado da multiplicacao de %d por %d e: %d\n", x, y, resultado); 

	return 0;

}