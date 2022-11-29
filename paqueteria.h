/*
*Proyecto Pedidos
*Diego Acevedo Ortega
*A01276068
*TC1033
*/

/*
*Clase Paqueteria maneja todo tipo de paquetes, que
*se dividen en cartas y paquetes normales.
*/

//Bibliotecas

#ifndef PAQUETERIA_H_
#define PAQUETERIA_H_

#include <string>
#include <iostream>
#include <sstream>

using namespace std;

#include "carta.h"
#include "paqueteNormal.h"


const int MAX = 100; //Constante de tamano de arreglos


//Declaro clase Paqueteria
class Paqueteria{

    private:

        //Declaro atributos de instancia
        Carta cartas[MAX];
        PaqueteNormal paqNors[MAX];
        int icartas, ipaqNors;

    public:

        //Declaro constructor
        Paqueteria(){

            icartas = 0;
            ipaqNors = 0;

        }


        //Declaro metodos
        void creaEjemploCartas();
        void creaEjemploPaqNors();
        void muestraCartas();
        void muestraPaqNors();
        void costoCartas();
        void costoPaqNors();
        void costoTotal();
        void agregaCarta(float recorrido);
        void agregaPaqNor(float recorrido, float peso,
        float largo, float alto, float ancho);

};

//METODOS QUE CREAN EJEMPLOS

/**
 * Utliza el arreglo de tipo Carta.
 * Llena el arreglo con 1 ejemplo. Los identificadores
 * de cartas van de 0 a 99.
 * El id de la ultima carta lo modifica hasta la 
 * ultimo creado.
 *
 * @param
 * @return
*/
void Paqueteria::creaEjemploCartas(){

    cartas[0] = Carta(icartas, -2000.0);
    icartas += 1;

}


/**
 * Utliza el arreglo de tipo PaqueteNormal.
 * Llena el arreglo con 1 ejemplo. Los identificadores
 * de paquete normal van de 0 a 99.
 * El id del ultimo paquete normal lo modifica hasta el 
 * ultimo creado.
 *
 * @param
 * @return
*/
void Paqueteria::creaEjemploPaqNors(){

    paqNors[0] = PaqueteNormal(ipaqNors, -10000000.0,
    1.0, 1.0, 1.0, 1.0);
    ipaqNors += 1;

}



//METODOS QUE MUESTRAN CADA ARREGLO

/**
 * Utiliza el arreglo de Carta y su indice.
 * Recorre todo el arreglo, imprimiendo cada uno de
 * los objetos que pertenecen al mismo.
 *
 * @param
 * @return
*/
void Paqueteria::muestraCartas(){

    for(int i = 2; i <= icartas; i++){

        cout << cartas[i].toString();

    }

}


/**
 * Utiliza el arreglo de PaqueteNormal y su indice.
 * Recorre todo el arreglo, imprimiendo cada uno de
 * los objetos que pertenecen al mismo.
 *
 * @param
 * @return
*/
void Paqueteria::muestraPaqNors(){

    for(int i = 2; i <= ipaqNors; i++){

        cout << paqNors[i].toString();

    }

}



//METODOS QUE CALCULA EL COSTO DE CADA ARREGLO

/**
 * Utiliza el arreglo de Carta y su ultimo indice.
 * Almacena en una variable auxiliar la suma de los
 * costos de cada carta mientras recorre el arreglo.
 *
 * @param
 * @return
*/
void Paqueteria::costoCartas(){

    int suma = 0;

    for(int i = 0; i <= icartas; i++){

        suma = suma + cartas[i].costo();

    }

    cout << "El costo de todas las cartas es: " <<
    suma << endl;

}


/**
 * Utiliza el arreglo de PaqueteNormal y su ultimo
 * indice.
 * Almacena en una variable auxiliar la suma de los
 * costos de cada carta mientras recorre el arreglo.
 *
 * @param
 * @return
*/
void Paqueteria::costoPaqNors(){

    int suma = 0;

    for(int i = 0; i <= ipaqNors; i++){

        suma = suma + paqNors[i].costo();

    }

    cout << "El costo de todos los paquetes normales es: " 
    << suma << endl;

}



//METODO QUE CALCULA EL COSTO DE TODO TIPO DE PAQUETE

/**
 * Emplea tres arreglos: Carta y PaqueteNormal.
 * Utiliza el ultimo indice de cada uno de los 
 * arreglos.
 * La funcion calcula el total de los costos.
 *
 * Imprime el total.
 *
 * @param
 * @return
 */
void Paqueteria::costoTotal(){

    float total = 0;

    //Ciclo que suma los valores de Cartas y los guarda
    //en total
    for(int i = 0; i <= icartas; i++){

        total = total + cartas[i].costo();

    }

    //Ciclo que suma los valores de Paquetes Normales
    //y los guarda en total
    for(int i = 0; i <= ipaqNors; i++){

        total = total + paqNors[i].costo();

    }

    cout << "El costo de todo el pedido es: " 
    << total << endl;

}



//METODOS QUE CREAN OBJETOS PARA CADA ARREGLO

/**
 * Utiliza arreglo de Carta y su ultimo indice.
 * Recibe el recorrido.
 * El metodo genera el nuevo id, crea el objeto
 * Carta y lo agrega al arreglo.
 *
 * @param
 * @return
 */
void Paqueteria::agregaCarta(float recorrido){

    icartas += 1;
    Carta aux(icartas - 1, recorrido);
    cartas[icartas] = aux;

}


/**
 * Utiliza arreglo de PaqueteNormal y su ultimo
 * indice.
 * Recibe el recorrido, el paso y las dimensiones.
 * El metodo genera el nuevo id, crea el objeto
 * PaqueteNormal y lo agrega al arreglo.
 *
 * @param
 * @return
 */
void Paqueteria::agregaPaqNor(float recorrido, float peso,
        float largo, float alto, float ancho){

    ipaqNors += 1;
    PaqueteNormal aux(ipaqNors + 98, recorrido, peso, largo,
    alto, ancho);
    paqNors[ipaqNors] = aux;

}

#endif //PAQUETERIA_H_