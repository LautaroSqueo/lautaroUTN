#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	char operador;
	int resultado;
	int resultadoDivision;

	printf("Ingrese el numero: ");
	scanf("%d", &numeroUno);
	fflush(stdin); // hace que abajo no agarre el "ENTER" como el caracter
	printf("Ingrese el operador (+/-): ");
	scanf("%c", &operador);
	printf("Ingrese el numero: ");
	scanf("%d", &numeroDos);

	switch(operador){
		case '+':
			resultado = sumarDosEnteros(numeroUno, numeroDos);
			break;
		case '-':
			resultado = numeroUno - numeroDos;
			break;
		case'/':
			resultado = dividirDosEnteros(numeroUno, numeroDos, &resultadoDivision);
			if(resultado == -1){
				printf("\n No se puede dividir por 0");
			}
			printf("El resultado es: %d", resultadoDivision);
			break;

	}

	//printf("\nEl resultado es %d", resultado);

	return 0;
}
