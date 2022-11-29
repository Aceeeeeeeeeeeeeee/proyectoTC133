/*
*Proyecto Pedidos
*Diego Acevedo Ortega
*A01276068
*TC1033
*/

/*
*Clase Dimension compone la clase Paquete 
*Normal.
*/

//Bibliotecas

#ifndef DIMENSION_H_
#define DIMENSION_H_

#include <string>
#include <sstream>

using namespace std;


class Dimension{

    private:
    
        //Declaro atributos de instancia
        float largo, ancho, alto;

    public:

        //Declaro constructor por default
        Dimension(){

            largo = 0.0;
            ancho = 0.0;
            alto = 0.0;

        }

        //Declaro constructor que recibe valores
        Dimension(float lar, float anch, float alt){

            largo = lar;
            ancho = anch;
            alto = alt;

        }


        //Declaro metodo
        float volumen();

};

/**
 * Metodo que calcula el volumen del paquete 
 * multiplicando su alto, su ancho y su largo
 *
 * @param
 * @return float el volumen
*/
float Dimension::volumen(){

    float volum;
    volum = largo * ancho * alto;
    return volum;

}

#endif //DIMENSION_H_