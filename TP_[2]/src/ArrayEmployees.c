#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayEmployees.h"
#include "utn.h"
#include "Extras.h"



//  2.1
/// @fn int inicializoArrayAlumnos(Employee*, int)
/// @brief
/// inicializo el array
/// @param array puntero al array de employee
/// @param longitud tamaño del array
/// @return retorna 0 si OK y -1 si error
int initEmployees(Employee* list, int len)
{
	int retorno = -1;

	if (list != NULL && len > 0)
	{
		for(int i = 0; i < len; i++)
		{
			list[i].isEmpty = 1;
		}
		retorno = 0;
	}
	return retorno;
}


int addEmployee(Employee* list, int len, int id, char name[], char lastName[], float salary, int sector)
{
	int retorno = -1;

	if(list != NULL && len > 0 && id >= 0 && name != NULL && lastName != NULL && salary > 0 && sector > 0)
	{
		list[id].id = id;
		strncpy(list[id].name, name, sizeof(list[id].name));
		strncpy(list[id].lastName, lastName, sizeof(list[id].lastName));
		list[id].salary = salary;
		list[id].sector = sector;
		list[id].isEmpty = 0;

		retorno = 0;
	}

    return retorno;
}

///
///
int addNewEmployee(Employee* arrayEmployee, int len)
{
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int id;

	//pedir datos
	pedirDatos(name,lastName,&salary,&sector);

	if(getNewID(arrayEmployee, len, &id)){
		printf("Error al conseguir el ID");
		return 1;
	}

	//agregar empleados
	addEmployee(arrayEmployee, len, id, name, lastName, salary, sector);

	return 0;
}

int getNewID(Employee* list, int len, int *id) {

	int retorno = -1;

	for (int i = 0; i < len; i++)
	{
		if (list[i].isEmpty)
		{
			*id = i;
			retorno = 0;
			break;
		}
	}

	return retorno;
}


int printEmployees(Employee* list, int length)
{

	int retorno = -1;

	printf("%-15s %-15s %-15s %15s %15s \n", "ID", "NOMBRE", "APELLIDO", "SALARIO", "SECTOR");
	for(int i = 0; i < length; i++)
	{
		if(list[i].isEmpty != 1){
			printf("%-15d %-15s %-15s %15.2f %15d\n", list[i].id, list[i].name, list[i].lastName, list[i].salary, list[i].sector);
			retorno = 0;
		}
	}
 return retorno;
}








