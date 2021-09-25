#ifndef CALCULADORA_H_
#define CALCULADORA_H_

#include <stdio.h>
#include <stdlib.h>

int menu();
void op1(int *num1);
void op2(int *num2);
int suma(int num1, int num2);
int resta(int num1, int num2);
float division(int num1, int num2);
int multiplicacion(int num1, int num2);
int factorial(int num);
void operar(int num1, int num2, int *sum, int *rest, int *multi, float *div, int *fact1, int *fact2);
void mostrar(int num1, int num2, int sum, int rest, int multi, float div, int fact1, int fact2);

#endif /* CALCULADORA_H_ */
