#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	char operador;
	int resultado;

	printf("Ingrese el numero: ");
	scanf("%d", &numeroUno);
	fflush(stdin); // hace que abajo no agarre el "ENTER" como el caracter
	printf("Ingrese el operador (+/-): ");
	scanf("%c", &operador);
	printf("Ingrese el numero: ");
	scanf("%d", &numeroDos);

	switch(operador){
		case '+':
			resultado = numeroUno + numeroDos;
			break;
		case '-':
			resultado = numeroUno - numeroDos;
			break;
	}

	printf("El resultado es %d", resultado);

	return 0;
}


