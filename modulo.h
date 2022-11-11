#include<string>

class Modulo{
private:

    std::string nombre;

    float exam_1;
    float exam_2;
    float exam_final;

    float tarea_1;
    float tarea_2;
    float tarea_3;

    float prom;

public:

    Modulo(): nombre(""), exam_1(0.0), exam_2(0.0),exam_final(0.0), tarea_1(0.0), tarea_2(0.0), tarea_3(0.0), prom(0.0){};
    Modulo(std::string nom, float ex1, float ex2, float exf, float tar1, float tar2, float tar3, float pro): nombre(nom), exam_1(ex1), exam_2(ex2),exam_final(exf), tarea_1(tar1), tarea_2(tar2), tarea_3(tar3), prom(pro){};


    std::string get_nombre();

    float get_exam_1();
    float get_exam_2();
    float get_exam_final();

    float get_tarea_1();
    float get_tarea_2();
    float get_tarea_3();

    float get_prom();


    void set_nombre(std::string);

    void set_exam_1(float);
    void set_exam_2(float);
    void set_exam_final(float);

    void set_tarea_1(float);
    void set_tarea_2(float);
    void set_tarea_3(float);

    void set_prom(float);

    float calc_prom();
    std::string progreso();
};

std::string Modulo::get_nombre(){
    return nombre;
}

void Modulo::set_nombre(std::string nom){
    nombre = nom;
}


float Modulo::get_exam_1(){
    return exam_1;
}

void Modulo::set_exam_1(float ex1){
    exam_1 = ex1;
}


float Modulo::get_exam_2(){
    return exam_2;
}

void Modulo::set_exam_2(float ex2){
    exam_2 = ex2;
}


float Modulo::get_exam_final(){
    return exam_final;
}

void Modulo::set_exam_final(float exf){
    exam_final = exf;
}


float Modulo::get_tarea_1(){
    return tarea_1;
}

void Modulo::set_tarea_1(float tar1){
    tarea_1 = tar1;
}


float Modulo::get_tarea_2(){
    return tarea_2;
}

void Modulo::set_tarea_2(float tar2){
    tarea_2 = tar2;
}


float Modulo::get_tarea_3(){
    return tarea_3;
}

void Modulo::set_tarea_3(float tar3){
    tarea_3 = tar3;
}


float Modulo::get_prom(){
    return prom;
}

void Modulo::set_prom(float pro){
    prom = pro;
}



float Modulo::calc_prom(){
    prom = (exam_1*0.2)+(exam_2*0.2)+(exam_final*0.3)+(tarea_1*0.1)+(tarea_2*0.1)+(tarea_3*0.1);
    return prom;
}

std::string Modulo::progreso(){
    std::string prog = "";

    if (prom < 70){
        prog = "Estas reprobando la materia";
    }

    else{
        prog = "Estas aprobando la materia";
    }
    return prog;
}