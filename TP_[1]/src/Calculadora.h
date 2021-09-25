#ifndef CALCULADORA_H_
#define CALCULADORA_H_

#include <stdio.h>
#include <stdlib.h>

/// @fn int menu()
/// @brief
/// Muestra el menu e ingresa una opcion
/// @pre
/// @post
/// @return opcion
int menu();
/// @fn void op1(int*)
/// @brief
/// Pide el primer numero y lo devuelve por referencia
/// @pre
/// @post
/// @param num1
void op1(int *num1);
/// @fn void op2(int*)
/// @brief
/// Pide el segundo numero y lo devuelve por referencia
/// @pre
/// @post
/// @param num2
void op2(int *num2);
/// @fn int suma(int, int)
/// @brief
/// Pasa los numeros y devuelve la suma
/// @pre
/// @post
/// @param num1
/// @param num2
/// @return
int suma(int num1, int num2);
/// @fn int resta(int, int)
/// @brief
/// Pasa los numeros y devuelve la resta
/// @pre
/// @post
/// @param num1
/// @param num2
/// @return
int resta(int num1, int num2);
/// @fn float division(int, int)
/// @brief
/// Pasa los numeros y devuelve la division como flotante
/// @pre
/// @post
/// @param num1
/// @param num2
/// @return
float division(int num1, int num2);
/// @fn int multiplicacion(int, int)
/// @brief
/// Pasa los numeros y devuelve la multiplicacion
/// @pre
/// @post
/// @param num1
/// @param num2
/// @return
int multiplicacion(int num1, int num2);
/// @fn long int factorial(int)
/// @brief
/// Realiza los factoreales del numero que se le pase
/// @pre
/// @post
/// @param num
/// @return
long int factorial(int num);
/// @fn void operar(int, int, int*, int*, int*, float*, long int*, long int*)
/// @brief
/// Toma los dos numeros, invoca todas las funciones y devuelve los resultados por referencia
/// @pre
/// @post
/// @param num1
/// @param num2
/// @param sum
/// @param rest
/// @param multi
/// @param div
/// @param fact1
/// @param fact2
void operar(int num1, int num2, int *sum, int *rest, int *multi, float *div, long int *fact1, long int *fact2);
/// @fn void mostrar(int, int, int, int, int, float, long int, long int)
/// @brief
/// Muestra todos los resultados y valida que se puedan hacer los operandos
/// @pre
/// @post
/// @param num1
/// @param num2
/// @param sum
/// @param rest
/// @param multi
/// @param div
/// @param fact1
/// @param fact2
void mostrar(int num1, int num2, int sum, int rest, int multi, float div, long int fact1, long int fact2);

#endif /* CALCULADORA_H_ */
