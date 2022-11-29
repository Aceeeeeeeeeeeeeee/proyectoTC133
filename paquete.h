/*
*Proyecto Pedidos
*Diego Acevedo Ortega
*A01276068
*TC1033
*/

/*
*Clase Paquete es la case padre de Carta y Paquete 
*Normal, esta clase tiene los metodos y atributos 
*genericos para un paquete.
*/

//Bibliotecas

#ifndef PAQUETE_H_
#define PAQUETE_H_

#include <string>
#include <sstream>

using namespace std;


//Declaro la clase abstracta Paquete
class Paquete{

    protected:

        //Declaro atributos de instancia
        int id;
        float recorrido;

    public:

        //Declaro constructor por default
        Paquete(){

            id = 0;
            recorrido = 0.0;

        }

        //Declaro constructor que recibe valores
        Paquete(int i, float rec){

            id = i;
            recorrido = rec;

        }


        //Declaro metodos
        int getId() const;
        float getRecorrido() const;
        virtual float costo() = 0;
        string toString() const;

};

//Getter de id y de recorrido

/**
 * getter id
 *
 * @param
 * @return int: id del paquete
*/
int Paquete::getId() const{

    return id;

}


/**
 * getter recorrido
 *
 * @param
 * @return float: recorrido del paquete
*/
float Paquete::getRecorrido() const{

    return recorrido;

}



/**
 * Almacenda los valores de los atributos 
 * en una cadena de texto.
 *
 * @param
 * @return string con los datos del paquete
*/
string Paquete::toString() const{

    stringstream aux;
    aux << "el id es " << id << " su recorrido es "
    << recorrido << "\n";
    return aux.str();

}

#endif //PAQUETE_H_