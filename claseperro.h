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

       int get_state();
       int get_age();
       void set_state(); //APUNTADORES I GUESS
       void set_age(int n);
       virtual string get_id()=0;;
    
};
//Geterrs de id,state,age
int Perro::get_state(){
    cout<<"1.-Sano \n 2.-Enfermo \n 3.-Muerto \n 4.-Adoptado \n"<<state;
    return state;
};
int Perro::get_age(){
    return age;
};
void Perro::set_state(){
    int n;
    cout<<"1.-Sano \n 2.-Enfermo \n 3.-Muerto \n 4.-Adoptado";
    cin>>n;
    state=n;
};
void Perro::set_age(int n){
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
       float get_cantidad();
       void set_cantidad();
       int get_numero();
       string get_id();
};
string Grande::get_id(){
    stringstream aux;
    aux<<"El perro"<<id<<"de nombre "<<name<< "de raza "<<raza;
    return aux.str();
};

float Grande::get_cantidad(){
    return cantidad;
};
int Grande::get_numero(){
    return numero;
};
void Grande::set_cantidad(){
    cantidad=cantidad+1;
    //AQUI NECESITO PERSONAS PARA PONER COMO FUNCIONA ALIMENTAR
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
       float get_cantidad();
       void set_cantidad();
       int get_numero();
       string get_id();
};
string Mediano::get_id(){
    stringstream aux;
    aux<<"El perro"<<id<<"de nombre "<<name<< "de raza "<<raza;
    return aux.str();
};
float Mediano::get_cantidad(){
    return cantidad;
};
int Mediano::get_numero(){
    return numero;
};

void Mediano::set_cantidad(){
    //AQUI NECESITO PERSONAS PARA PONER COMO FUNCIONA ALIMENTAR
    cantidad=cantidad+1;
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
       float get_cantidad();
       void set_cantidad();
       int get_numero();
       string get_id();
};
string Pequeno::get_id(){
    stringstream aux;
    aux<<"El perro"<<id<<"de nombre "<<name<< "de raza "<<raza;
    return aux.str();
};
float Pequeno::get_cantidad(){
    return cantidad;
};

int Pequeno::get_numero(){
    return numero;
};

void Pequeno::set_cantidad(){
    cantidad=cantidad+1;
    //AQUI NECESITO PERSONAS PARA PONER COMO FUNCIONA ALIMENTAR
};
#endif