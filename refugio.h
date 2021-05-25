/*
 *Proyecto
 *Jorge Guerrero Díaz
 *A01411752
 *18/05/2021
*/

//ALIMENTAR AQUI ES NECESARIO WOHO 

#include <iostream>
#include <string>
#include <stdio.h>
#include "claseperro.h"

using namespace std;

const int MAX=100;

class Refugio {
    private:
        float budget;
        Perro *perr[MAX];
        int id =0;

    public:
        Refugio():budget(0) {};
        ~Refugio(){
        for (int i=0; i < id;i++){
            delete perr[i];
            }
        };
        void agrega_grande(int ide,string nombre,string especie,int estad,int edad);
        void agrega_mediano(int ide,string nombre,string especie,int estad,int edad);
        void agrega_pequeno(int ide,string nombre,string especie,int estad,int edad);
        void mostrar(string algo);
        void ejemplo();
};

void Refugio::agrega_grande(int ide,string nombre,string especie,int estad,int edad){
    perr[id]= new Grande(ide,nombre,especie,estad,edad);
    id++;
};
void Refugio::agrega_mediano(int ide,string nombre,string especie,int estad,int edad){
    perr[id]= new Mediano(ide,nombre,especie,estad,edad);
    id++;
};
void Refugio::agrega_pequeno(int ide,string nombre,string especie,int estad,int edad){
    perr[id]= new Pequeno(ide,nombre,especie,estad,edad);
    id++;
};
void Refugio::mostrar(string algo){
    for (int i=0;i< id; i++){    
      cout<< perr[i]->get_id();
    }
};
void Refugio::ejemplo(){
perr[id]=new Grande(id,"Perrote","Husky",2,13);
id++;
perr[id]=new Mediano(id,"Perrete","SnoopDog",3,14);
id++;
perr[id]=new Pequeno(id,"Perrito","Chihuahua",1,15);
id++;
};