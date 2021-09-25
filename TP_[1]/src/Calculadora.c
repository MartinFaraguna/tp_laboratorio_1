#include <stdio.h>
#include <stdlib.h>

int menu() {
	int opcion;

	printf("\nOpcion 1 Ingrese Primer Operando \n");
	printf("Opcion 2 Ingrese Segundo Operando \n");
	printf("Opcion 3 Calcular Operaciones \n");
	printf("Opcion 4 Mostrar Resultados \n");
	printf("Opcion 5 Salir \n");
	printf("Ingrese una opcion: ");
	scanf("%d", &opcion);

	return opcion;
}

void op1(int *num1) {
	int num;

	printf("\nIngrese el numero: ");
	scanf("%d", &num);

	*num1 = num;
}

void op2(int *num2) {
	int num;

	printf("\nIngrese el numero: ");
	scanf("%d", &num);

	*num2 = num;
}

int suma(int num1, int num2) {

	int suma;

	suma = num1 + num2;

	return suma;
}

int resta(int num1, int num2) {

	int resta;

	resta = num1 - num2;

	return resta;
}

float division(int num1, int num2) {

	float division;

	division = (float)num1 / num2;

	return division;
}

int multiplicacion(int num1, int num2) {

	int multi;

	multi = num1 * num2;

	return multi;
}

long int factorial(int num) {

	long int fact = 1;

	for (int i = 1; i < num + 1; i++) {
		fact *= i;
	}

	return fact;
}

void operar(int num1, int num2, int *sum, int *rest, int *multi, float *div, long int *fact1, long int *fact2) {

	if (num1 == NULL || num2 == NULL){

	*sum = suma(num1, num2);
	*rest = resta(num1, num2);
	*multi = multiplicacion(num1, num2);
	*div = division(num1, num2);
	*fact1 = factorial(num1);
	*fact2 = factorial(num2);
	} else {

	}
}

void mostrar(int num1, int num2, int sum, int rest, int multi, float div, long int fact1, long int fact2) {

	printf("\nEl resultado de %d + %d es: %d", num1, num2, sum);
	printf("\nEl resultado de %d - %d es: %d", num1, num2, rest);
	printf("\nEl resultado de %d * %d es: %d", num1, num2, multi);
	if (num2 != 0) {
		printf("\nEl resultado de %d / %d es: %.3f", num1, num2, div);
	} else {
		printf("\nNo es posible dividir por cero");
	}
	if (num1 > -1) {
		printf("\nEl factorial de %d es: %ld", num1, fact1);
	} else {
		printf("\nNo se puede factorear un numero negativo");
	}
	if (num2 > -1) {
		printf("\nEl factorial de %d es: %ld\n", num2, fact2);
	} else {
		printf("\nFactorearNo se puede factorear un numero negativo\n");
	}
}

