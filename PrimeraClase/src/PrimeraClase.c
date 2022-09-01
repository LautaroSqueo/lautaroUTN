
#include <stdio.h>
#include <stdlib.h>

#define NUMEROUNO 20
#define NUMERODOS 40

int main(void) {// FUNCION MAIN ES EL PUNTO DE ENTRADA DE NUESTRO PROGRAMA

	setbuf(stdout, NULL);

	int numeroUno;
	int numeroDos;
	int numeroTres;
	int numeroMayor;

	printf("Numero uno: ");
	scanf("%d", &numeroUno);
	printf("Numero dos: ");
	scanf("%d", &numeroDos);
	printf("Numero tres: ");
	scanf("%d", &numeroTres);


	if(numeroUno > numeroDos){
		numeroMayor = numeroUno;
	}else{
		if(numeroDos > numeroTres){
			numeroMayor = numeroDos;
		}else{
			numeroMayor = numeroTres;
		}
	}


	printf("El numero mayor es: %d", numeroMayor);

	return 0;
}
