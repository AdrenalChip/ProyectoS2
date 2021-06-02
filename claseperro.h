/*
 *Proyecto
 *Jorge Guerrero Díaz
 *A01411752
 *18/05/2021
*/

/*
 * Clase Perros que contiene los atributos de las 3 subclases:
 * Grandes, Pequeños, Medianos
 * Junto con los metodos necesarios, como saber la cantidad de perros, que comen
 * y cantidad de alimento restante
*/
#ifndef Perro_H_
#define Perro_H_

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

//Declaracion de la Clase Perros

class Perro{
    protected:
        //Declaro variables de instancia 
        int id;
        string name;
        string raza;
        int state;
        int age;
    public:
        //Declaro los metodos que va a tener mi objeto
        /* Constructor
         * @param int:id, string:name, string:raza, int:state, int:age
         * @return Objeto Perro 
        */
       Perro(int ide, string nombre,string especie,int estad, int edad):id(ide),name(nombre),raza(especie),state(estad),age(edad){};
       /* Constructor
         * @param int:id, int:state, int:age
         * @return Objeto Perro 
        */
       Perro(int ide,int estad, int edad):id(ide),name("-"),raza("-"),state(estad),age(edad){};

       void get_state();
       void get_age();
       void set_state(); //APUNTADORES I GUESS
       void set_age();
       virtual string get_id()=0;;
    
};
//Geterrs de id,state,age

/* get_state
 * Funcion que nos permite visualizar el estado en el que se encuentra el perro
 * 
 * @param 
 * @return 
*/
void Perro::get_state(){
    cout<<"1.-Sano \n 2.-Enfermo \n 3.-Muerto \n 4.-Adoptado \n"<<"Su estado es :"<< state<<"\n";
};


/* get_age
 * Funcion que nos regresa el valor de la edad de el perro en el refugio
 * 
 * @param 
 * @return 
*/
void Perro::get_age(){
    cout<<"El perro lleva "<<age<<"de vida";
};


/* set_state
 * Funcion que nos permite establecer el estado de un perro
 * mediante un input generado dentro de la misma funcion.
 * 
 * @param 
 * @return 
*/
void Perro::set_state(){
    int n;
    cout<<"1.-Sano \n 2.-Enfermo \n 3.-Muerto \n 4.-Adoptado";
    cin>>n;
    state=n;
};


/* set_age
 * Funcion que nos permita ir cambiando la edad de los perros conforme
 * el paso de los años dentro del refugio
 * 
 * @param 
 * @return 
*/
void Perro::set_age(){
    int n;
    cout<<"Cuantos años lleva desde que arribo al refugio?";
    cin>>n;
    age=age+n;
};

//Declaracion de la subclase Grande de perro
class Grande : public Perro{
    private:
        //Declaro valores de instancia
        string alimento="Dog Chow para Razas grandes";
        float cantidad=0; //alimento
        int numero=0;
        
    public:
       Grande(int ide,string nombre,string especie,int estad, int edad):Perro(ide,nombre,especie,estad,edad){
           numero=numero+ 1;
       };
       Grande(int ide,int estad, int edad):Perro(ide,estad,edad){
           numero=numero+1;
       };
       string get_id();
};


/* get_id
 * Funcion que nos permite imprimir todas la informacion de cada mascota de tipo grande
 * que se guarda en una variable stringstream
 * 
 * @param 
 * @return aux.str() 
*/
string Grande::get_id(){
    stringstream aux;
    aux<<"El perro "<< id <<" de nombre "<< name << " de raza "<< raza <<"\n"; 
    return aux.str();
};

//Declaracion de la subclase Mediano de perro
class Mediano : public Perro{
    private:
        //Declaro valores de instancia
        string alimento="Dog Chow para Razas medianas";
        float cantidad=0; //alimento
        int numero=0;
    public:
        //Declaro los metodos que va a tener mi objeto
       Mediano(int ide,string nombre,string especie,int estad, int edad):Perro(ide,nombre,especie,estad,edad){
           numero=numero+ 1;
       };
       //Declaro los metodos que va a tener mi objeto
       Mediano(int ide,int estad, int edad):Perro(ide,estad,edad){
           numero=numero+1;
       };
       string get_id();
};

/* get_id
 * Funcion que nos permite imprimir todas la informacion de cada mascota de tipo mediano
 * que se guarda en una variable stringstream
 * 
 * @param 
 * @return aux.str() 
*/
string Mediano::get_id(){
    stringstream aux;
    aux<<"El perro "<< id <<" de nombre "<< name << " de raza "<< raza <<"\n";
    return aux.str();
};

//Declaracion de la subclase Pequeno de perro
class Pequeno : public Perro{
    private:
        //Declaro valores de instancia
        string alimento="Dog Chow para Razas pequeñas";
        float cantidad=0; //alimento
        int numero=0;
    public:
        //Declaro los metodos que va a tener mi objeto
       Pequeno(int ide,string nombre,string especie,int estad, int edad):Perro(ide,nombre,especie,estad,edad){
           numero=numero+ 1;
       };
       //Declaro los metodos que va a tener mi objeto
       Pequeno(int ide,int estad, int edad):Perro(ide,estad,edad){
           numero=numero+1;
       };
       string get_id();
};
/* get_id
 * Funcion que nos permite imprimir todas la informacion de cada mascota de tipo pequeño
 * que se guarda en una variable stringstream
 * 
 * @param 
 * @return aux.str() 
*/
string Pequeno::get_id(){
    stringstream aux;
    aux<<"El perro "<< id <<" de nombre "<< name << " de raza "<< raza<<"\n";
    return aux.str();
};

#endif