#include <iostream>
#include <string>

using namespace std;

#include "mate.h"
#include "progra.h"
#include "modulo.h"

int main(){
    
    float exam_1, exam_2, exam_final, tarea_1, tarea_2, tarea_3, promedio;
    string nombre, progress;
    int clase;

    cout << "En que clase desea estar:\n 1. Mate\n 2. Progra\n 3. Modulo\n Ingresa el numero: ";
    cin >> clase;

    if (clase == 1){
        
        cout << "Ingresa la calificacion de tu examen 1: ";
        cin >> exam_1;

        cout << "Ingresa la calificacion de tu examen 2: ";
        cin >> exam_2;

        cout << "Ingresa la calificacion de tu examen final: ";
        cin >> exam_final;

        cout << "Ingresa la calificacion de tu tarea 1: ";
        cin >> tarea_1;

        cout << "Ingresa la calificacion de tu tarea 2: ";
        cin >> tarea_2;

        cout << "Ingresa la calificacion de tu tarea 3:";
        cin >> tarea_3;


        Mate alumno_1(nombre, exam_1, exam_2, exam_final, tarea_1, tarea_2, tarea_3, 0.0);

        promedio = alumno_1.calc_prom();
        cout << "Tu promedio en mate es: " << promedio << endl;

        progress = alumno_1.progreso();
        cout << progress << "\n";
    }

    if (clase == 2){

        cout << "Ingresa la calificacion de tu examen 1: ";
        cin >> exam_1;

        cout << "Ingresa la calificacion de tu examen 2: ";
        cin >> exam_2;

        cout << "Ingresa la calificacion de tu examen final: ";
        cin >> exam_final;

        cout << "Ingresa la calificacion de tu tarea 1: ";
        cin >> tarea_1;

        cout << "Ingresa la calificacion de tu tarea 2: ";
        cin >> tarea_2;

        cout << "Ingresa la calificacion de tu tarea 3: ";
        cin >> tarea_3;


        Progra alumno_2(nombre, exam_1, exam_2, exam_final, tarea_1, tarea_2, tarea_3, 0.0);

        promedio = alumno_2.calc_prom();
        cout << "Tu promedio en mate es: " << promedio << endl;

        progress = alumno_2.progreso();
        cout << progress << "\n";
    }

    if (clase == 3){

        cout << "Ingresa la calificacion de tu examen 1: ";
        cin >> exam_1;

        cout << "Ingresa la calificacion de tu examen 2: ";
        cin >> exam_2;

        cout << "Ingresa la calificacion de tu examen final: ";
        cin >> exam_final;

        cout << "Ingresa la calificacion de tu tarea 1: ";
        cin >> tarea_1;

        cout << "Ingresa la calificacion de tu tarea 2: ";
        cin >> tarea_2;

        cout << "Ingresa la calificacion de tu tarea 3: ";
        cin >> tarea_3;


        Modulo alumno_3(nombre, exam_1, exam_2, exam_final, tarea_1, tarea_2, tarea_3, 0.0);

        promedio = alumno_3.calc_prom();
        cout << "Tu promedio en mate es: " << promedio << endl;

        progress = alumno_3.progreso();
        cout << progress << "\n";
    }

return 0;
}