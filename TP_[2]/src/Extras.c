/*
 * Extras.c
 *
 *  Created on: 16 oct. 2021
 *      Author: Administrador
 */
#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployees.h"
#include "utn.h"
#include "Extras.h"

int menu() {
	int opcion;

	printf("\n1 - Altas \n");
	printf("2 - MODIFICAR \n");
	printf("3 - BAJA \n");
	printf("4 - INFORMAR\n");
	printf("5 - SALIR\n");
	printf("Ingrese una opcion: ");
	scanf("%d", &opcion);

	return opcion;
}


int pedirDatos(char name[],char lastName[],float* salary,int* sector)
{
	int retorno = -1;

	if(getName(name) == 0 && getLastName(lastName) == 0 && getSalary(salary) == 0 && getSector(sector) == 0)
	{
		retorno = 0;
	} else {
		printf("error en escribir datos");
	}
	return retorno;
}

int getName(char name[]){
	int retorno = -1;

	if (name != NULL)
	{
		fflush(stdout);
		getValidString("Ingrese el nombre: ","No es un nombre valido.", name);
		retorno = 0;
	}
	return retorno;
}

int getLastName(char lastName[]){
	int retorno = -1;

	if (lastName != NULL)
	{
		fflush(stdout);
		getValidString("Ingrese el apellido: ","No es un apellido valido.", lastName);
		retorno = 0;
	}
	return retorno;
}

int getSalary(float* salary)
{
	int retorno = -1;
	char aux[51];
	if (getStringNumerosFlotantes("Ingrese el salario: ",aux)){
		*salary = atof(aux);
		retorno = 0;
	}
	return retorno;
}

int getSector(int* sector) {
	int retorno = -1;
	char aux[51];
	if (getStringNumeros("Ingrese el sector: ", aux))
	{
		*sector = atoi(aux);
		retorno = 0;
	}
	return retorno;
}







