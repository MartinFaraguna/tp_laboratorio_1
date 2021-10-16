/*
 * Empleados.h
 *
 *  Created on: 16 oct. 2021
 *      Author: Administrador
 */

#ifndef ARRAYEMPLOYEES_H_
#define ARRAYEMPLOYEES_H_

typedef struct
{

 int id;
 char name[51];
 char lastName[51];
 float salary;
 int sector;
 int isEmpty;

}Employee;


int initEmployees(Employee* list, int len);
int addNewEmployee(Employee* arrayEmployee, int len);
int getNewID(Employee* list, int len, int *id);
int printEmployees(Employee* list, int length);


#endif /* ARRAYEMPLOYEES_H_ */
