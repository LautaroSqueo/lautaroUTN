#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"

int sumarDosEnteros(int primerNumero, int segundoNumero){
	int resultado;

	resultado = primerNumero + segundoNumero;

	return resultado;
}

int dividirDosEnteros(int primerNumero, int segundoNumero, int * resultadoDivision){
	int retorno = 0;

	if(resultadoDivision != NULL){
		if(validarNumeroMayorACero(segundoNumero) == 0){
				*(resultadoDivision) = primerNumero / segundoNumero;
			}else{
				retorno = -1;
			}
	}



	return retorno;
}
