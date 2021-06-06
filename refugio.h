/*
 *Proyecto
 *Jorge Guerrero Díaz
 *A01411752
 *18/05/2021
*/


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
        int id =0;
        Persona *peop[MAX];
        int ids=0;
    public:
        /* Constructor
         * @param 
         * @return Objeto Refugio 
        */
        Refugio():budget(0){};
        /* Destructor
         * @param 
         * @return  
        */
        ~Refugio(){
        cout<<"Ejucatando destructor..";
        for (int i=0; i <= id;i++){
            delete perr[i];
            delete peop[i];
            }
        };

        void agrega_grande(int id,string nombre,string especie,int estad,int edad);
        void agrega_mediano(int id,string nombre,string especie,int estad,int edad);
        void agrega_pequeno(int id,string nombre,string especie,int estad,int edad);

        void agrega_voluntario(int ids,string nombre,int estad);
        void agrea_empleado(int ids,string nombre,int estad,string turnos);

        int get_id();
        int get_ids();

        void mostrar();
        void mostrar_personas();
        void ejemplo();
};
int Refugio::get_id(){
    return id;
}

int Refugio::get_ids(){
    return ids;
}
/* agrega_grande
 * Funcion que llama al constructor  de la subclase Grande de la clase Perro y genera un objeto 
 * tipo perro que se almacena en la lista como apuntador
 * 
 * @param int:id, string:nombre, string:especie, int:estad, int:edad
 * @return 
*/
void Refugio::agrega_grande(int id,string nombre,string especie,int estad,int edad){
    perr[id]= new Grande(id,nombre,especie,estad,edad);
    id++;
};


/* agrega_mediano
 * Funcion que llama al constructor de la subclase Mediano de la clase Perro y genera un objeto 
 * tipo perro que se almacena en la lista como apuntador
 * 
 * @param int:id, string:nombre, string:especie, int:estad, int:edad
 * @return 
*/
void Refugio::agrega_mediano(int id,string nombre,string especie,int estad,int edad){
    perr[id]= new Mediano(id,nombre,especie,estad,edad);
    id++;
};


/* agrega_pequeno
 * Funcion que llama al constructor de la subclase Pequeno de la clase Perro y genera un objeto 
 * tipo perro que se almacena en la lista como apuntador
 * 
 * @param int:id, string:nombre, string:especie, int:estad, int:edad
 * @return 
*/
void Refugio::agrega_pequeno(int id,string nombre,string especie,int estad,int edad){
    perr[id]= new Pequeno(id,nombre,especie,estad,edad);
    id++;
};


/* agrega_voluntario
 * Funcion que llama al constructor de la subclase Voluntario de la clase Personas y genera un objeto 
 * tipo persona que se almacena en la lista como apuntador
 * 
 * @param int:ids, string:nombre, int:estad, float:hour
 * @return 
*/
void Refugio::agrega_voluntario(int ids,string nombre,int estad){
    peop[ids]= new Voluntario(ids,nombre,estad);
    ids++;
};


/* agrega_empleado
 * Funcion que llama al constructor de la subclase Empleado de la clase Personas y genera un objeto 
 * tipo persona que se almacena en la lista como apuntador
 * 
 * @param int:ids, string:nombre, int:estad, string:turno
 * @return 
*/
void Refugio::agrea_empleado(int ids,string nombre,int estad,string turno){
    peop[ids]=new Empleado(ids,nombre,estad,turno);
    ids++;
};


/* mostrar
 * Funcion que a traves de un ciclo for  que recorre desde el 0 hasta el numero maximo 
 * de perros almaceanos que llama a la funcion get_id() de
 * todos los objetos alamcenados en la lista de perros.
 * 
 * @param 
 * @return 
*/
void Refugio::mostrar(){
    for (int i=0;i <= id; i++){    
      cout<< perr[i]->get_id();
      cout<<"Deseas hacer algo con este perro? \n 1.-Si 2.-No";
      int ans;
      cin>>ans;
      if (ans==1){
          perr[i]->set_state();
      }else{
          cout<<"\nNo hay cambios\n";
      }
    }
};


/* mostrar_personas
 * Funcion que a traves de un ciclo for  que recorre desde el 0 hasta el numero maximo 
 * de ppersonas almaceanos que llama a la funcion get_id() de
 * todos los objetos alamcenados en la lista de personas.
 * 
 * @param 
 * @return 
*/
void Refugio::mostrar_personas(){
    for (int i=0;i <= ids; i++){  
      cout<< peop[i]->get_id();
      cout<<"Deseas hacer algo con esta persona? \n 1.-Si 2.-No";
      int ans;
      cin>>ans;
      if (ans==1){
          peop[i]->set_state();
      }else{
          cout<<"\n No hay cambios\n";
      }
    }
    
};


/* ejemplo
 * Funcion usada para probar que se generen de manera adecuada 
 * los objetos y que no haya problemas entre constructores, tanto 
 * de la clase perro como la clase personas.
 * 
 * @param 
 * @return 
*/
void Refugio::ejemplo(){
perr[id]=new Grande(id,"Perrote","Husky",2,13);
id++;
perr[id]=new Mediano(id,"Perrete","SnoopDog",3,14);
id++;
perr[id]=new Pequeno(id,"Perrito","Chihuahua",1,15);
id++;

peop[ids]=new Voluntario(ids,"Juanito",2);
ids++;
peop[ids]=new Empleado(ids,"Pepe",1,"Matutino");
ids++;

};
#endif