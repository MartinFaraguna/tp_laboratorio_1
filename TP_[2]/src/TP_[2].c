/*
 ============================================================================
 Name        : TP_[2].c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "utn.h"
#include "Extras.h"


#define MAXIMO 1000

int main(void) {
	setbuf(stdout, NULL);
	int opcion;

	Employee arrayEmployee[MAXIMO];

	if(initEmployees(arrayEmployee, MAXIMO) == 0)
	{
		printf("Lista creada.");
	} else {
		printf("lista no creada.");
		return 0;
	}


	do {
			opcion = menu();

			switch (opcion) {
			case 1:
				/*
				if(pedirDatos(name, lastName, &salary, &sector) == 0){
					printf("%s, %s, %.2f, %i", name, lastName, salary, sector);
				} else {
					printf("error al ingresar datos");
				}
				*/
				if(addNewEmployee(arrayEmployee, MAXIMO) == 0)
				{
					printf("Empleado cargado");
				}
				else
				{
					printf("Error al cargar el empleado");
				}
				break;
			case 2:

				break;
			case 3:

				break;
			case 4:
				printEmployees(arrayEmployee, MAXIMO);
				break;
			case 5:
				printf("Gracias, vuelva pronto!!\n");
				break;
			default:
				printf("\nOpcion incorrecta, intente nuevamente. \n");
			}
		} while (opcion != 5);



	/*char mostrar[4096];

	getValidString("Ingrese string: ","No son letras", mostrar);
	printf("El texto ingresado es: %s", mostrar);*/

	return 0;
}
