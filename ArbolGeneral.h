
// INICIO DE DIRECTIVAS DE PREPROCESADOR
#ifndef __ARBOLGENERAL_H__
#define __ARBOLGENERAL_H__

#include "NodoGeneral.h"



// DEFINICIÓN DE CLASE ´Árbol General´
template <class T>
class ArbolGeneral {
  
    protected :

        NodoGeneral<T>* raiz ;
      
    public :
  
        ArbolGeneral ( void ) ;
        ArbolGeneral ( T val ) ;
        ~ArbolGeneral ( void ) ;
        bool esVacio ( void ) ;
        NodoGeneral<T>* obtenerRaiz ( void ) ;
        void fijarRaiz ( NodoGeneral<T>* nraiz ) ;
        bool insertarNodo ( T padre, T n ) ;
        bool eliminarNodo ( T n ) ;
        bool buscar ( T n ) ;
        unsigned int altura ( void ) ;
        unsigned int tamano ( void ) ;
        void preOrden ( void ) ;
        void posOrden ( void ) ;
        void nivelOrden ( void ) ;
    
} ;



// FIN DE DIRECTIVAS DE PREPROCESADOR
#include "ArbolGeneral.hxx"

#endif

