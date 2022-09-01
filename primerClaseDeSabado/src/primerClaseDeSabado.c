/*
 ============================================================================
 Se ingresan 10 numeros y 10 letras
 Se necesita saber:
 a) promedio de numeros
 b) cantidad de vocales (cuantas a, cuantas e...)
 c) de la letra a, el valor mas grande
 d) el factor de todos los numeros ingresados
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define T 5

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	char letra;
	int acumuladorNumeros;
	float promedio;
	int contadorA;
	int contadorE;
	int contadorI;
	int contadorO;
	int contadorU;
	int maximoNumero;
	int factor;

	int i;

	acumuladorNumeros = 0;
	int contadorA= 0;
	int contadorE= 0;
	int contadorI= 0;
	int contadorO= 0;
	int contadorU = 0;
	factor = 1;

	for(i=0;i<T;i++){

		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		printf("Ingrese una letra: ");
		fflush(stdin);
		scanf("%c", &letra);

		switch(letra){
		case 'a':
			contadorA++;
			if(numero > maximoNumero || contadorA == 1){
				maximoNumero = numero;
			}
			break;
		case 'e':
			contadorE++;
			break;
		case 'i':
			contadorI++;
			break;
		case 'o':
			contadorO++;
			break;
		case 'u':
			contadorU++;
			break;

		}

		acumuladorNumeros += numero;
		factor = factor * numero;

	}

	promedio = (float) acumuladorNumeros/T;

	printf("%f \n", promedio);
	printf("Se ingresaron: %d letras A \n", contadorA);
	printf("Se ingresaron: %d letras E \n", contadorE);
	printf("Se ingresaron: %d letras I \n", contadorI);
	printf("Se ingresaron: %d letras O \n", contadorO);
	printf("Se ingresaron: %d letras U \n", contadorU);
	if(contadorA>0){
		printf("El maximo es: %d \n", maximoNumero);
	}else{
		printf("No se ingresaron letras A para calcular el maximo \n");
	}
	printf("El factor es: %d", factor);

	return 0;
}
