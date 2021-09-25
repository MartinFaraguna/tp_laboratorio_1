/*
 ============================================================================
 Name        : TP 1
 Author      : Martin Faraguna
 ============================================================================
 */

#include "Calculadora.h"

int main(void) {

	setbuf(stdout, NULL);

	int num1;
	int num2;
	int suma;
	int resta;
	int multiplicacion;
	float division;
	long int factorial1;
	long int factorial2;

	int opcion;

	printf("Bienvenido, elija una opcion \n");
	do {
		opcion = menu();

		switch (opcion) {
		case 1:
			op1(&num1);
			break;
		case 2:
			op2(&num2);
			break;
		case 3:
			printf("Usted ha seleccionado 3 Calcular Operaciones \n");
			operar(num1, num2, &suma, &resta, &multiplicacion, &division, &factorial1, &factorial2);
			break;
		case 4:
			printf("Usted ha seleccionado 4 Mostrar Resultados \n");
			mostrar(num1, num2, suma, resta, multiplicacion, division, factorial1, factorial2);
			break;
		case 5:
			printf("Gracias, vuelva pronto!!\n");
			break;
		default:
			printf("\nOpcion incorrecta, intente nuevamente. \n");
		}
	} while (opcion != 5);

	return 0;
}

