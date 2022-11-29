/*
*Proyecto Pedidos
*Diego Acevedo Ortega
*A01276068
*TC1033
*/

/*
*Clase Paquete Normal que hereda de la Clase Paquete,
*esta contiene los atributos y metodos para un paquete
*normal, esta clase compone la clase paqueteria.
*/

//Bibliotecas

#ifndef PAQUETENORMAL_H_
#define PAQUETENORMAL_H_

#include "paquete.h"
#include "dimension.h"

#include <string>
#include <sstream>

using namespace std;


//Declaro clase Paquete Normal
class PaqueteNormal: public Paquete{

    private:

        //Declaro atributos de instancia
        int variableX = 100000;
        float peso;
        float largo;
        float alto;
        float ancho;
        Dimension volum;

    public:

        //Declaro constructor por default
        PaqueteNormal(){

            id = 0;
            recorrido = 0.0;
            
        }

        //Declaro constructor que recibe valores
        PaqueteNormal(int i, float rec, float pe, float lar, float alt, float anch):Paquete(i, rec){

            peso = pe;
            largo = lar;
            alto = alt;
            ancho = anch;
            
        }


        //Declaro metodos
        float costo();
        string toString();

};

/**
 * Metodo que calcula el costo de enviar un 
 * paquete normal, tomando en cuenta su peso,
 * la trayectoria y su volumen
 *
 * @param
 * @return float costo de enviar un paquete normal
*/
float PaqueteNormal::costo(){

    Dimension x(largo, alto, ancho);
    volum = x;
    float costoPaqNor;
    costoPaqNor = 50 + ((recorrido * peso * volum.volumen()) / variableX);
    return costoPaqNor;

}



/**
 * Almacenda los valores de los atributos 
 * en una cadena de texto.
 *
 * @param
 * @return string con los datos del paquete normal
*/
string PaqueteNormal::toString(){

    stringstream aux;
    aux << "el id es " << id << " su recorrido es "
    << recorrido << " el peso es " << peso << 
    " el volumen es " << volum.volumen() <<
    " el costo del paquete normal es " << costo() << "\n";
    return aux.str();

}

#endif //PAQUETERIANORMAL_H_