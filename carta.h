/*
*Proyecto Pedidos
*Diego Acevedo Ortega
*A01276068
*TC1033
*/

/*
*Clase Carta que hereda de la Clase Paquete, esta
*contiene los atributos y metodos para una carta,
*esta clase compone la clase paqueteria.
*/

//Bibliotecas

#ifndef CARTA_H_
#define CARTA_H_

#include "paquete.h"

#include <string>
#include <sstream>

using namespace std;


//Declaro clase Carta
class Carta: public Paquete{

    private:

        //Declaro atributos de instancia
        float costoCartaXKm = 0.05;

    public:

        //Declaro constructor por default
        Carta(){

            id = 0;
            recorrido = 0.0;

        }

        //Declaro constructor que recibe valores
        Carta(int i, float rec):Paquete(i, rec){}


        //Declaro metodos
        float costo();
        string toString();

};

/**
 * Metodo que calcula el costo de enviar una 
 * carta, multiplica el costo de una carta por
 * km por el recorrido y a eso se le suman 50
 * pesos
 *
 * @param
 * @return float costo de enviar una carta
*/
float Carta::costo(){

    float costoCarta;
    costoCarta = 50 + (costoCartaXKm * recorrido);
    return costoCarta;

}



/**
 * Almacenda los valores de los atributos 
 * en una cadena de texto.
 *
 * @param
 * @return string con los datos del carta
*/
string Carta::toString(){

    stringstream aux;
    aux << "el id es " << id << " su recorrido es "
    << recorrido << " el costo de la carta es " 
    << costo() << "\n";
    return aux.str();

}

#endif //CARTA_H_