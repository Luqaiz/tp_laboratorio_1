#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Sirve para pedir un numero al usuario
 *
 * \param Se muestra el mensaje
 * \return Se devuelve el numero ingresado
 *
 */
float pedirNumero(char mensaje[]);

/** \brief Sirve para sumar dos numeros
 *
 * \param El primer numero a sumar
 * \param El segundo numero a sumar
 * \return Se devuelve la suma
 *
 */
float suma (float a, float b);

/** \brief Sirve para restar dos numeros
 *
 * \param El primer numero a restar
 * \param El segundo numero a restar
 * \return Se devuelve la resta
 *
 */
float resta (float a, float b);

/** \brief Sirve para dividir dos numeros
 *
 * \param Numero a dividir
 * \param Numero divisor
 * \return Se devuelve la division
 *
 */
float division (float a, float b);

/** \brief Sirve para multiplicar dos numeros
 *
 * \param Primer valor
 * \param Segundo valor
 * \return Se devuelve la multiplicacion
 *
 */
float multiplicacion (float a, float b);

/** \brief Sirve para realizar el factorial de un numero
 *
 * \param A es el numero a factorizar
 * \return Se devuelve el factoreo
 *
 */
long long int factorial (float a);

#endif // FUNCIONES_H_INCLUDED
