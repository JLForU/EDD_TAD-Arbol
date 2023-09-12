
// DIRECTIVAS DE PREPROCESADOR
#include "NodoGeneral.h"



// IMPLEMENTACIÓN DE CLASE ´Nodo General´

template <class T>
NodoGeneral<T>::NodoGeneral ( void ) {
    this -> desc.clear() ;
}

template <class T>
NodoGeneral<T>::~NodoGeneral ( void ) {

    typename std::list<NodoGeneral<T>>::iterator it ;
    for ( it=this->desc.begin() ; it != this->desc.end() ; it++ )
        delete *it ;
      
    this -> desc.clear() ;
    
}

template <class T>
T& NodoGeneral<T>::obtenerDato ( void ) {
    return this -> dato ;
}

template <class T>
void NodoGeneral<T>::fijarDato ( T& val ) {
    this -> dato = val ;
}

template <class T>
void NodoGeneral<T>::limpiarLista ( void ) {
    this -> desc.clear() ;
}

template <class T>
void NodoGeneral<T>::adicionarDesc ( T& nval ) {
    NodoGeneral<T>* nodo = new NodoGeneral<T> ;
    nodo -> fijarDato(nval) ;
    this -> desc.push_back(nodo) ;
}

template <class T>
bool NodoGeneral<T>::eliminarDesc ( T& val ) {

    // buscar el nodo con el valor dado
    typename std::list<NodoGeneral<T>*>::iterator it ;
    NodoGeneral<T>* aux ;
    bool eliminado = false ;

    for ( it=this->desc.begin() ; it != this->desc.end() ; it++ ) {
        aux = *it ;
        if ( aux->obtenerDato() == val )
            break ;
    }

    // Si se encuentra, entonces se elimina.
    if ( it != this->desc.end() ) {
        delete *it ;
        this -> desc.erase(it) ;
        eliminado = true ;
    }

return eliminado ;
}

template <class T>
bool NodoGeneral<T>::esHoja ( void ) {
    return this->desc.size() == 0 ;
}

template <class T>
int NodoGeneral<T>::altura ( void ) {

    int alt = -1 ;

    if ( this -> esHoja() ) {

        alt = 0 ;

    } else {

        int alth ;
        
        typename std::list<NodoGeneral<T>*>::iterator it ;
        for (it = this->desc.begin(); it != this->desc.end(); it++) {
            alth = (*it)->altura() ;
            if ( alt < alth+1 )
                alt = alth+1 ;
        }

    }

return alt ;
}

template <class T>
void NodoGeneral<T>::preOrden ( void ) {
    
    std::cout << this->dato << " " ;
  
    typename std::list<NodoGeneral<T>*>::iterator it ;
    for ( it=this->desc.begin() ; it != this->desc.end() ; it++ ) {
        (*it)->preOrden() ;
    }
    
}

