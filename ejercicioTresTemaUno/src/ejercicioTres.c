/*
 ============================================================================
 Name        : ejercicioTres.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroDelMedio;

	printf("Numero uno: ");
	scanf("%d", &numeroUno);
	printf("Numero dos: ");
	scanf("%d", &numeroDos);
	printf("Numero tres: ");
	scanf("%d", &numeroTres);

	if(numeroUno > numeroDos && numeroUno < numeroTres){
			numeroDelMedio = numeroUno;
			if(numeroDos > numeroTres && numeroDos < numeroUno){
				numeroDelMedio = numeroDos;
			}else{
				if(numeroTres > numeroDos && numeroTres < numeroUno){
				numeroDelMedio = numeroTres;
				}
			}


	}else{
		numeroDelMedio = -1;
	}

	printf("El numero del medio es(Si es -1 el resultado,"
			" significa que no existe tal numero): %d",numeroDelMedio);

	return 0;
}
