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

	int division;

	division = (float) num1 / num2;

	return division;
}

int multiplicacion(int num1, int num2) {

	int multi;

	multi = num1 * num2;

	return multi;
}

int factorial(int num) {

	int fact = 1;

	for (int i = 1; i < num + 1; i++) {
		fact *= i;
	}

	return fact;
}

void operar(int num1, int num2, int *sum, int *rest, int *multi, float *div,
		int *fact1, int *fact2) {
	*sum = suma(num1, num2);
	*rest = resta(num1, num2);
	*multi = multiplicacion(num1, num2);
	*div = division(num1, num2);
	*fact1 = factorial(num1);
	*fact2 = factorial(num2);
}

void mostrar(int num1, int num2, int sum, int rest, int multi, float div, int fact1, int fact2) {
	printf("\nSuma: %d", sum);
	printf("\nResta: %d", rest);
	printf("\nMultiplicacion: %d", multi);
	if (num2 != 0) {
		printf("\nDivision: %2.f", div);
	} else {
		printf("\nDivision: No se puede dividir por 0");
	}
	if (num1 > -1) {
		printf("\nFactorial del primer numero: %d", fact1);
	} else {
		printf("\nFactorial del primer numero: No se puede factorear un numero negativo");
	}
	if (num2 > -1) {
		printf("\nFactorial del segundo numero: %d\n", fact2);
	} else {
		printf("\nFactorial del segundo numero: No se puede factorear un numero negativo\n");
	}
}

