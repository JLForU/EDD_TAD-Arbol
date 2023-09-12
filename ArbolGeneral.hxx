
// DIRECTIVAS DE PREPROCESADOR 
#include "ArbolGeneral.h"



// IMPLEMENTACIÓN DE CLASE ´Árbol General´

template <class T>
ArbolGeneral<T>::ArbolGeneral ( void ) {
    this -> raiz = NULL ;
}

template <class T>
ArbolGeneral<T>::ArbolGeneral ( T val ) {
    NodoGeneral<T>* nodo = new NodoGeneral<T> ;
    nodo -> fijarDato ( val ) ;
    this -> raiz = nodo ;
}

template <class T>
ArbolGeneral<T>::~ArbolGeneral ( void ) {
    delete this -> raiz ;
    this -> raiz = NULL ;
}

template <class T>
bool ArbolGeneral<T>::esVacio ( void ) {
    return this -> raiz == NULL ;
}

template <class T>
NodoGeneral<T>* ArbolGeneral<T>::obtenerRaiz ( void ) {
    return this -> raiz ;
}

template <class T>
void ArbolGeneral<T>::fijarRaiz ( NodoGeneral<T>* nraiz ) {
    this -> raiz = nraiz ;
}

template <class T>
bool ArbolGeneral<T>::insertarNodo ( T padre , T n ) {
    return true ;
  // si el arbol es vacio:
  // crear nuevo nodo, asignar dato, poner ese nodo como raiz

  // si hay al menos un nodo en el arbol:
  // - revisar el nodo donde estoy para ver si coincide con padre
  // - si es padre, insertar ahi el nuevo hijo
  // - si no es el padre, revisar cada nodo hijo y llamar a insertar alli
}

template <class T>
bool ArbolGeneral<T>::eliminarNodo ( T n ) {
    return true ;
  // si el arbol es vacio:
  // retornar

  // si es la raiz la que quiero eliminar:
  // - hacer delete a raiz
  // - poner raiz en nulo

  // si hay al menos un nodo en el arbol:
  // - si alguno de los hijos es el que quiero eliminar
  // - si ninguno de los hijos es el que quiero eliminar:
  // - revisar cada nodo hijo y llamar a eliminar alli
}

template <class T>
bool ArbolGeneral<T>::buscar ( T n ) {
    return true ;
  // si el arbol no esta vacio:
  // comparo dato en el nodo actual con dato parametro
  // si es ese, retorno que lo encontre
  // si no, para cada nodo hijo hacer el llamado a buscar
}

template <class T>
unsigned int ArbolGeneral<T>::altura ( void ) {

    if ( this -> esVacio() ) {
      return -1 ;
    } else {
      return ( this -> raiz ) -> altura() ;
    }

}

template <class T>
unsigned int ArbolGeneral<T>::tamano ( void ) {
    return 0 ;
    // si esta vacio, retorno 0
    // para cada uno de los hijos, llamo a tamaño
    // acumulo esos tamaños en una variable
    // retorno ese valor acumulado más 1
}

template <class T>
void ArbolGeneral<T>::preOrden ( void ) {

    if ( !this->esVacio() )
        ( this -> raiz ) -> preOrden() ;
      
}

template <class T>
void ArbolGeneral<T>::posOrden ( void ) {
    // llamar a posorden sobre cada hijo
    // imprimo en pantalla el dato del nodo actual
}

template <class T>
void ArbolGeneral<T>::nivelOrden ( void ) {
    // NO ES RECURRENTE (O RECURSIVO)
    // ubicarme en la raiz
    // poner la raiz en una cola
    // hacer un ciclo mientras haya algo en la cola
    // - saco el primero disponible en la cola
    // - imprimo su dato
    // - inserto en la cola todos sus hijos
}

