
// DIRECTIVAS DE PREPROCESADOR
#include <iostream>

#include "ArbolGeneral.h"
#include "NodoGeneral.h"



// SENTENCIAS GLOBALES


// PROTOTIPOS


/* IMPLEMENTACIÓN DE FUNCIÓN "MAIN" */

int main ( void ) {


    ArbolGeneral<int> arbol(10) ;

    arbol.insertarNodo (10,2) ;
    arbol.insertarNodo (10,1) ;
    arbol.insertarNodo (10,3) ;

    std::list<NodoGeneral<int>*>::iterator it;
    NodoGeneral<int>* raiz = arbol.obtenerRaiz();
    for (it = raiz->obtenerDesc().begin(); it != raiz->obtenerDesc().end(); ++it) {
        std::cout << (*it)->obtenerDato() << std::endl;
    }

    NodoGeneral<int>* nodoEncontrado = arbol.buscar(arbol.obtenerRaiz(),1) ;


    if (nodoEncontrado != NULL) {
        std::cout << "Nodo con valor " << nodoEncontrado->obtenerDato() << " encontrado." << std::endl ;
    } else {
        std::cout << "Nodo con valor " << nodoEncontrado->obtenerDato() << " no encontrado." << std::endl ;
    }

    std::cout << "Hello World!\n" ;


}




// -->    