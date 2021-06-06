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
    Jorge.ejemplo();
    Jorge.mostrar_personas();
    Jorge.mostrar();
    int x=1;
    int n=0;
/*
    Refugio Eustaquio;
    while (x==1){
        cout<<"Bienvenido al Refugio ´Eustaquio´  \n Que desea hacer el dia de hoy?";
        cout<<"\n 1.-Ingreso de nuevo Perro \n 2.-Revisar registro de perro y modificarlo";
        cout<<"\n 3.-Ingreso de nueva Persona \n 4.-Revisar registro de personas y modificarlo";
        cout<<"\n 5.-Ejemplo \n 6.-Salir";
        cin>>n;
        if (n==1){
            string name,raza;
            int edad,estado,IDE;
            IDE=Eustaquio.get_id();
            cout<<"Informacion necesaria \n Nombre:";
            cin>>name;
            cout<<"\n Raza:";
            cin>>raza;
            cout<<"\n Edad:";
            cin>>edad;
            cout<<"\n Estado: \n 1.-Sano \n 2.-Enfermo \n 3.-Muerto \n 4.-Adoptado";
            cin>>estado;
            int tamano;
            cout<<"Tamano: \n 1.-Grande \n 2.-Mediano \n 3.-Peuqeno";
            cin>>tamano;
            if (tamano==1){
                Eustaquio.agrega_grande(IDE,name,raza,estado,edad);
            }else if (tamano==2){
                Eustaquio.agrega_mediano(IDE,name,raza,estado,edad);
            }else if (tamano==3){
                Eustaquio.agrega_pequeno(IDE,name,raza,estado,edad);
            }else{
                cout<<"Error, ingreso invalido";
            }
        }else if (n==2){
            Eustaquio.mostrar();
            
        }else if (n==3){
            string name,turno;
            int estado,IDE,tipo;
            IDE=Eustaquio.get_ids();
            cout<<"Informacion necesaria \n Nombre:";
            cin>>name;
            cout<<"\n Estado: \n 1.-Estan en su turno \n 2.-Acabaron su turno \n 3.-No arrivaron";
            cin>>estado;
            cout<<"Tipo de Persona \n 1.-Voluntario \n 2.-Empleado";
            cin>>tipo;
            if (tipo==2){
                int magic;
                cout<<"Turno: \n 1.-Matutino \n 2.-Vespertino \n 3.-Nocturno";
                cin>>magic;
                if (magic==1){
                    turno="Matutino";

                }else if(magic==2){
                    turno="Vespertino";
                }else if(magic==3){
                    turno="Nocturno";
                }else{
                cout<<"Error, ingreso invalido";
                }
                Eustaquio.agrea_empleado(IDE,name,estado,turno);
            }else if (tipo==1){
                Eustaquio.agrega_voluntario(IDE,name,estado);
            }    
        }else if (n=4){
            Eustaquio.mostrar_personas();
        }else if (n=5){
            Refugio Jorge;
            Jorge.ejemplo();
            Jorge.mostrar();
            // Jorge.mostrar_personas();
        }else if (n=6){
            x=2;
        }else{
            cout<<"Opciones invalidas";
        }
    };*/
};
