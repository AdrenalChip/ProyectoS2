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
#include "clasepersonas.h"
#include "refugio.h"

using namespace std;

int main (){
    
    Refugio Jorge;
    Jorge.agrega_grande(0,"Paquito","Husky",2,13);
    Jorge.agrea_empleado(0,"Pepe",1,"Matutino");
    Jorge.ejemplo();
    Jorge.mostrar();
    Jorge.mostrar_personas();
};
