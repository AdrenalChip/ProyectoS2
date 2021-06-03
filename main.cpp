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
    int x=1;
    int n=0;
    Refugio Eustaquio;
    while (x==1){
        cout<<"Bienvenido al Refugio ´Eustaquio´  \n Que desea hacer el dia de hoy?";
        cout<<"1.-Ingreso de nuevo Perro \n 2.-Revisar registro de perro y modificarlo";
        cout<<"3.-Ingreso de nueva Persona \n 4.-Revisar registro de personas y modificarlo";
        cout<<"5.-Ejemplo \n 6.-Salir";
        cin>>n;
        if (n==1){
            string name,raza;
            int edad,estado,IDE;
            IDE=Eustaquio.get_id();
            cout<<"Informacion necesaria \n Nombre:";
            cin>>name;
            
        }else if (n==2){

        }
        


    };
    Refugio Jorge;
    Jorge.agrega_grande(0,"Paquito","Husky",2,13);
    Jorge.agrea_empleado(0,"Pepe",1,"Matutino");
    Jorge.ejemplo();
    Jorge.mostrar();
    Jorge.mostrar_personas();
};
