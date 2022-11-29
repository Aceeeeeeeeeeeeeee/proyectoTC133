/*
*Proyecto Pedidos
*Diego Acevedo Ortega
*A01276068
*TC1033
*/

/*
*Este es el main del programa pedidos, el cual crea
*difentes tipos de pedidos de acuerdo a sus
*caracterizticas. Se puede calcular el costo de cada
*paquete, la suma de los costos de cada tipo de
*pedido y la suma total de los pedidos.
*/

//Bibliotecas

#include <iostream>

using namespace std;

#include "paqueteria.h" //Aqui se crean los objetos
#include "carta.h"
#include "paqueteNormal.h"


//Menu de opciones

void menu(){

    //Imprime las opciones que tiene sistema

    cout << "\nMENU:\n\n";
    cout << "1. Mostrar cartas\n";
    cout << "2. Mostrar paquetes normales\n";
    cout << "3. Calcular el costo total de" <<
    " las cartas\n";
    cout << "4. Calcular el costo total de" <<
    " los paquetes normales\n";
    cout << "5. Calcular el costo total del" <<
    " pedido\n";
    cout << "6. Agregar carta\n";
    cout << "7. Agregar paquete normal\n";
    cout << "8. Salir\n\n";

}


int main(){

    Paqueteria paqueteria;
    paqueteria.creaEjemploCartas();
    paqueteria.creaEjemploPaqNors();

    int opcion = 0;//Guarda la decision del usuario

    //Variables temporales para resibir los atributos
    //de los objetos.
    float temp_recorrido, temp_peso,
    temp_largo, temp_alto, temp_ancho;


    //Ciclo del programa para que corra mientras no
    //se tome la decision de salir
    while(opcion < 8 && opcion > -1){

        //Impresion del menu
        menu();

        //Recibe la decision del usuario de acuerdo
        //a las opciones del menu
        cout << "Que desea realizar: ";
        cin >> opcion;

        //Switch que funciona dependiendo de opcion
        //realiza lo esperado
        switch(opcion){

            //Caso 1 imprime las cartas
            case 1:

                paqueteria.muestraCartas();
                break;
            
            //Caso 2 imprime los paquetes normales
            case 2:

                paqueteria.muestraPaqNors();
                break;
            
            //Caso 4 imprime el costo total de las cartas
            case 3:

                paqueteria.costoCartas();
                break;

            //Caso 5 imprime el costo total de los paquetes normales
            case 4:

                paqueteria.costoPaqNors();
                break;

            //Caso 7 imprime el costo total de todo el pedido
            case 5:

                paqueteria.costoTotal();
                break;

            //Caso 8 crea una carta
            case 6:

                cout << "\nIngresa el recorrido en km: ";
                cin >> temp_recorrido;
                paqueteria.agregaCarta(temp_recorrido);
                break;

            //Caso 9 crea un paquete normal
            case 7:

                cout << "\nIngresa el recorrido en km: ";
                cin >> temp_recorrido;
                cout << "\nIngresa el peso en gramos: ";
                cin >> temp_peso;
                cout << "\nIngresa el largo en cm: ";
                cin >> temp_largo;
                cout << "\nIngresa el alto en cm: ";
                cin >> temp_alto;
                cout << "\nIngresa el ancho en cm: ";
                cin >> temp_ancho;
                paqueteria.agregaPaqNor(temp_recorrido,
                temp_peso, temp_largo, temp_alto, temp_ancho);
                break;

        }

    }
    
}