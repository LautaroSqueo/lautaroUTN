#include <stdio.h>
#include <stdlib.h>

int inicializarArray(int array[], int len, int init);
int imprimirArray(int array[], int len);
int cargaAleatoriaArray(int array[], int len, int valor, int index);

int main(void) {
	setbuf(stdout,NULL);
	int edades[5];
	int notas[30];
	int retorno;


	inicializarArray(edades, 5, 0);
	retorno = inicializarArray(notas, 30, -1);

	if (retorno == -1) {
		imprimeMensaje("No anduvo la carga de datos del array");
	}

	imprimirArray(edades,5);
	imprimirArray(notas,30);

	retorno = cargaAleatoriaArray;

	return 0;
}

void imprimeMensaje(char mensaje[]){
	printf(mensaje);
}

int inicializarArray(int array[], int len, int init){
	int i;
	int cargoMal;
	int retorno = 0;

	if(array != NULL && len > 0){

	for(i = 0; i < len;i++){
		cargoMal = cargaAleatoriaArray(array, len, init, i);
		if (cargoMal == -1){
			retorno = -1;
			break;
		}
	}

	}
	return retorno;
}

int imprimirArray(int array[], int len){
	int i;

	if(array != NULL){

	for(i = 0; i < len;i++){
		printf("Iteracion numero: %d\n", i);
		printf("El valor es: %d\n", array[i]);
	}

	}
	return 0;
}

int cargaAleatoriaArray(int array[], int len, int valor, int index){
	int retorno = -1;

	if(array != NULL && len > 0 && index < len){

	array[index] = valor;

	retorno = 0;
	}
	return retorno;
}
