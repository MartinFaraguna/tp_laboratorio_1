/*
 * Extras.h
 *
 *  Created on: 16 oct. 2021
 *      Author: Administrador
 */

#ifndef EXTRAS_H_
#define EXTRAS_H_

int menu();
int pedirDatos(char name[],char lastName[],float* salary,int* sector);
int getName(char name[]);
int getLastName(char lastName[]);
int getSalary(float* salary);
int getSector(int *sector);

#endif /* EXTRAS_H_ */
