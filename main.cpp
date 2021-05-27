/*
Proyecto
Jorge Guerrero Díaz A01411752

*/

//CHECAR INDIVIDUAL  Y COLCETIVO 
// AGREGACION O COMPOSICION
//necesito un menu con opciones de registro de perro
#include <iostream>
#include <string>
#include <stdio.h>
#include "claseperro.h"
#include "refugio.h"
using namespace std;

int main (){
    cout<<"Hola que tal";
    Refugio Jorge;
    Jorge.agrega_grande(2,"Paquito","Husky",2,13);
    Jorge.ejemplo();
    Jorge.mostrar();
    //Perro *pedro = new Grande(2,"Pedro","OLa",2,32);
    //cout<< pedro->get_id();
    //Jorge->ejemplo();
    //Jorge->mostrar();
    //delete pedro;
    //delete Jorge;
};
