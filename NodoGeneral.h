
// INICIO DE DIRECTIVAS DE PREPROCESADOR
#ifndef __NODOGENERAL_H__
#define __NODOGENERAL_H__

#include <list>



// DEFINICIÓN DE CLASE ´Nodo General´
template <class T>
class NodoGeneral {


    protected :

        T dato ;
        std::list<NodoGeneral<T>*> desc ;

    public :
      
        NodoGeneral ( void ) ;
        ~NodoGeneral ( void ) ;
        T& obtenerDato ( void ) ;
        void fijarDato ( T& val ) ;
        void limpiarLista ( void ) ;
        void adicionarDesc ( T& nval ) ;
        bool eliminarDesc ( T& val ) ;
        bool esHoja ( void ) ;
        int altura ( void ) ;
        void preOrden ( void ) ;


};



// FIN DE DIRECTIVAS DE PREPROCESADOR
#include "NodoGeneral.hxx"

#endif

