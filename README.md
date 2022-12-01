# Proyecto TC133

Proyecto de la Materia Pensamiento Computacional Orientados a Objetos
Diego Acevedo Oretga
A01276068

## Contexto

Este proyecto calcula los costos al hacer un pedido en una paquetería, hay dos tipos de pedidos, puedes pedir un paquete o una carta. Se puede hacer un pedido con múltiples cartas y paquetes, y del pedido se puede sacar el costo de cada carta, de cada paquete, de todas las cartas, de todos los paquetes y el total del pedido. Hay diferencias entre las cartas y los paquetes en cuestión de sus parametros.

## Funcionalidad

El prorama permite crear nuevas cartas y paquetes, y hacer diferentes tipos de calculos con los costos de los objetos del pedido.

Cuenta con un menú con las opciones ya mensionadas y corre en la consola.

## Consideraciones

El programa solo corre en la consola y esta hecho con c++ standard por lo que corre en todos los sistemas operativos

compilar con: "g++ carta.h paqueteNormal.h dimension.h paqueteria.h paquete.h main_paqueteria.cpp"

correr en linux: "/a.out"

correr en windows: "a.exe"

##Correcciones

1. Se realizo la clase paquete ("paquete.h") que es de la cual heredan carta("carta.h") y paqueteNormal(paqueteNormal.h"), pertenece a las sub competencias: "Diseño clases sencillas completas (con todos los atributos y métodos requeridos). Avance 2", "Implemento herencia de manera correcta y util Avance 3"
2. Se creo la clase Paqueteria("paqueteria.h") la cual esta compuesta por carta("carta.h") y paqueteNormal(paqueteNormal.h"), perenece a las sub competencias: "Utilizo el concepto de composición (o agreagación) en el diagrama de clases. Avance 3", "Impemento composición (o agregación) sieguiendo mi diagrama de clases Avance 3"
3. Se actaulizo el UML del programa, se encuentra en:"Diagrama_UML_pedido.png", pertenece a las sub competencias: "Implemento las clases en c++ siguiendo el diseño del diagrama de clases en UML. Avance 3", "Implemento clases apegadas a requerimientos a partir de un modelo. Avance 3"
4. Se siguieron los estandares en todo el codigo fuente, pertenece a la sub compretencia: "Sigo estándares en todo mi código fuente: estilo, sangrías, comentarios, nombres, etc... Avance 3"
5. Los avances del proyecto se guardaron correctamente en commits, pertenece a la sub competencia: "Guardo correctamente los avances en commits durante la materia. Avance 3"
