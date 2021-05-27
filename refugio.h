/*
 *Proyecto
 *Jorge Guerrero Díaz
 *A01411752
 *18/05/2021
*/

//ALIMENTAR AQUI ES NECESARIiO WOHO //

#ifndef Refugio_H_
#define Refugio_H_
#include <iostream>
#include <string>
#include <stdio.h>
#include "claseperro.h"
#include "clasepersonas.h"

using namespace std;

const int MAX=100;

class Refugio {
    private:
        float budget;
        Perro *perr[MAX];
        int id =1;
        Persona *peop[MAX];
        int ids=1;
    public:
        Refugio():budget(0) {};
        ~Refugio(){
        for (int i=0; i < id;i++){
            delete perr[i];
            delete peop[i];
            }
        };

        void agrega_grande(int id,string nombre,string especie,int estad,int edad);
        void agrega_mediano(int id,string nombre,string especie,int estad,int edad);
        void agrega_pequeno(int id,string nombre,string especie,int estad,int edad);

        void agrega_voluntario(int ids,string nombre,int estad,float hour);
        void agrea_empleado(int ids,string nombre,int estad,string turnos);

        void mostrar();
        void mostrar_personas();
        void ejemplo();
};

void Refugio::agrega_grande(int id,string nombre,string especie,int estad,int edad){
    perr[id]= new Grande(id,nombre,especie,estad,edad);
    id++;
};
void Refugio::agrega_mediano(int id,string nombre,string especie,int estad,int edad){
    perr[id]= new Mediano(id,nombre,especie,estad,edad);
    id++;
};
void Refugio::agrega_pequeno(int id,string nombre,string especie,int estad,int edad){
    perr[id]= new Pequeno(id,nombre,especie,estad,edad);
    id++;
};
void Refugio::agrega_voluntario(int ids,string nombre,int estad,float hour){
    peop[ids]= new Voluntario(ids,nombre,estad,hour);
    ids++;
};
void Refugio::agrea_empleado(int ids,string nombre,int estad,string turno){
    peop[ids]=new Empleado(ids,nombre,estad,turno);
    ids++;
};
void Refugio::mostrar(){
    for (int i=0;i< id; i++){    
      cout<< perr[i]->get_id();
    }
    
};
void Refugio::mostrar_personas(){
    for (int i=0;i< ids; i++){    
      cout<< peop[i]->get_id();
    }
    
};
void Refugio::ejemplo(){
perr[id]=new Grande(id,"Perrote","Husky",2,13);
id++;
perr[id]=new Mediano(id,"Perrete","SnoopDog",3,14);
id++;
perr[id]=new Pequeno(id,"Perrito","Chihuahua",1,15);
id++;

peop[ids]=new Voluntario(ids,"Juanito",2,1.33);
ids++;
peop[ids]=new Empleado(ids,"Pepe",1,"Matutino");
ids++;

};
#endif