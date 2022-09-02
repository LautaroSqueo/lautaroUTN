#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int numerosPares = 0;
	int numerosImpares = 0;
	int numeroMasChico;
	int parMasGrande;
	int flag = 1;
	int flagPares = 1;
	int positivos = 0;
	int negativos;
	int flagNegativos = 1;

	for(i = 0;i<10;i++){

		int numero;


		printf("Ingresa un numero: ");
		scanf("%d", &numero);
		if(numero != 0){
			if(flag == 1){
				numeroMasChico = numero;
				flag = 0;
			}else{
				if(numeroMasChico > numero){
					numeroMasChico = numero;
				}
			}

			if(numero >= 1){
				positivos = positivos + numero;
			}else{
				if(flagNegativos == 1){
					negativos = numero;
					flagNegativos = 0;
				}else{
					negativos = negativos * numero;
				}
			}

			if(numero % 2 == 0){
				numerosPares++;
				if(flagPares == 1){
					parMasGrande = numero;
				}else{
					if(parMasGrande < numero){
						parMasGrande = numero;
					}
				}

			}else{
				numerosImpares++;
			}

		}else{
			printf("Tienen que ser numeros distintos de 0, intentalo de nuevo: ");
			scanf("%d", &numero);
		}

	}

	printf("Numeros pares: %d \n", numerosPares);
	printf("Numeros impares: %d \n", numerosImpares);
	printf("El numero mas chico es: %d \n", numeroMasChico);
	printf("El numero par mas grande es: %d \n", parMasGrande);
	printf("Suma de los numeros positivos: %d \n", positivos);
	printf("Producto de los numeros negativos: %d \n", negativos);

	return 0;
}
