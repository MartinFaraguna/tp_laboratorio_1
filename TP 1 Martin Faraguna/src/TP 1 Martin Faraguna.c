/*
 ============================================================================
 Name        : TP.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include "Calculadora.h"

int main(void) {

	setbuf(stdout, NULL);

	int num1;
	int num2;

	int opcion;

	printf("Bienvenido, elija una opcion \n");
	do {
		opcion = menu();


		switch (opcion) {
		case 1:
			printf("Usted ha seleccionado 1 Ingrese el Primer Operando\n");
			op1(&num1);
			break;
		case 2:
			printf("Usted ha seleccionado 2	Ingrese el Segundo Operando \n");
			op2(&num2);
			break;
		case 3:
			printf("Usted ha seleccionado 3 Calcular Operaciones \n");
			break;
		case 4:
			printf("Usted ha seleccionado 4 Mostrar Resultados \n");
			break;
		case 5:
			printf("Gracias, vuelva prontos!!\n");
			break;
		default:
			printf("\nOpcion incorrecta, intente nuevamente. \n");
		}
	} while (opcion != 5);

	return 0;
}
