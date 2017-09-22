#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}EPersona;

/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @param tam es el tamaño del array.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(EPersona lista[],int tam);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param tam es el tamaño del array.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(EPersona lista[], int dni,int tam);

/** \brief Da de alta una persona
 *
 * \param lista el array se pasa como parametro.
 * \param tam es el tamaño del array.
 *
 */
void altaPersona (EPersona lista[], int tam);

/** \brief Inicializa la estructura en 0
 *
 * \param lista el array se pasa como parametro
 * \param tam es el tamaño del array
 *
 */
void iniciarEstructura (EPersona lista[],int tam);

/** \brief Da de baja una persona
 *
 * \param lista el array se pasa como parametro
 * \param tam es el tamaño del array
 *
 */
void bajaPersona (EPersona persona[], int tam);

/** \brief Muestra las personas ingresadas
 *
 * \param lista el array se pasa como parametro
 * \param tam es el tamaño del array
 *
 */

void mostrarPersonas (EPersona lista[],int tam);

/** \brief Muestra una persona
 *
 * \param lista el array se pasa como parametro
 *
 */
void mostrarPersona(EPersona lista);

/** \brief Imprime el grafico de barras
 *
 * \param lista el array se pasa como parametro
 * \param tam es el tamaño del array
 *
 */

void grafico (EPersona lista[], int tam);

/** \brief Ordena por nombre los datos ingresados
 *
 * \param lista el array se para como parametro
 * \param tam es el tamaño del array
 *
 */
void ordenarPorNombre (EPersona lista[], int tam);



#endif // FUNCIONES_H_INCLUDED
