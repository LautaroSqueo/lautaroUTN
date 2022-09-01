#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);
	int promedio = 0;
	int flag = 0;
	int i;
	int numeroIngresado;
	int total;
	for(i = 0;i < 5; i++){

		if(flag == 0){
			flag = 1;
			printf("ingrese un numero: ");
			scanf("%d", &numeroIngresado);
			total = numeroIngresado;
		}else{
			printf("ingrese un numero: ");
			scanf("%d", &numeroIngresado);
			total = total + numeroIngresado;
		}
	}
	promedio = total / 5;

	printf("El promedio es: %d", promedio);
	return 0;
}
