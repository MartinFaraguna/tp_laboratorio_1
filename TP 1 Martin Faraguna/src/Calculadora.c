#include <stdio.h>
#include <stdlib.h>

int menu() {
	int opcion;

	printf("\nOpcion 1 Ingrese Primer Operando \n");
	printf("Opcion 2 Ingrese Primer Operando \n");
	printf("Opcion 3 Calcular Operaciones \n");
	printf("Opcion 4 Mostrar Resultados \n");
	printf("Opcion 5 Salir \n");
	printf("Ingrese una opcion: ");
	scanf("%d", &opcion);

	return opcion;
}

void op1(int *num1){
	int num;

	printf("Ingrese el numero: ");
	scanf("%d", &num);

	*num1 = num;
}

void op2(int *num2){
	int num;

	printf("Ingrese el numero: ");
	scanf("%d", &num);

	*num2 = num;
}

int suma(int num1, int num2){

	int suma;

	suma = num1 + num2;

	return suma;
}

int resta(int num1, int num2){

	int resta;

	resta = num1 - num2;

	return resta;
}

int division(int num1, int num2){
	int division;

	division = num1 / num2;

	return division;
}



