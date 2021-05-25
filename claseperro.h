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

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

//Declaracion de la Clase Perros

class Perro{
    private:
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
       int get_age();
       void set_state(); //APUNTADORES I GUESS
       void set_age(int n);
       string get_id();
    
};
//Geterrs de id,state,age
/*
 * getter id
 * @param
 * @return int:id del perro
*/
string Perro::get_id(){
    stringstream aux;
    aux<<"El perro"<<id<<"de nombre "<<name<< "de raza "<<raza;
    return aux.str();
}

/*
 * getter state
 * @param
 * @return int:state del perro
*/
void Perro::get_state(){
    cout<<"1.-Sano \n 2.-Enfermo \n 3.-Muerto \n 4.-Adoptado \n"<<state;
}

/*
 * getter age
 * @param
 * @return int:age del perro
*/
int Perro::get_age(){
    return age;
}

/*
 * setter state
 * @param
 * @return 
*/
void Perro::set_state(){
    int n;
    cout<<"1.-Sano \n 2.-Enfermo \n 3.-Muerto \n 4.-Adoptado";
    cin>>n;
    state=n;
}

/*
 * setter state
 * @param
 * @return 
*/
void Perro::set_age(int n){
    age=age+n;
}

//Declaracion de la subclase Grande de perro
class Grande : public Perro{
    private:
        //Declaro valores de instancia
        string alimento="Dog Chow para Razas grandes";
        float cantidad; //alimento
        int numero;
    public:
        //Declaro los metodos que va a tener mi objeto
        /* Constructor
         * @param int:id, string:name, string:raza, int:state, int:age,int:numero
         * @return Objeto 
        */
       Grande(int ide,string nombre,string especie,int estad, int edad):Perro(ide,nombre,especie,estad,edad){
           numero=numero+ 1;
       }
       //Declaro los metodos que va a tener mi objeto
        /* Constructor
         * @param int:id, int:state, int:age,int:numero
         * @return Objeto 
        */
       Grande(int ide,int estad, int edad):Perro(ide,estad,edad){
           numero=numero+1;
       }
       float get_cantidad();
       float set_cantidad();
       int get_numero();
};

/*
 * getter cantidad
 * @param
 * @return float:cantidad de alimento del perro
*/
float Grande::get_cantidad(){
    return cantidad;
};
/*
 * getter age
 * @param
 * @return int:numero del perro
*/
int Grande::get_numero(){
    return numero;
};
/*
 * setter cantidad
 * @param 
 * @return 
*/
float Grande::set_cantidad(){
    //AQUI NECESITO PERSONAS PARA PONER COMO FUNCIONA ALIMENTAR
}

//Declaracion de la subclase Mediano de perro
class Mediano : public Perro{
    private:
        //Declaro valores de instancia
        string alimento="Dog Chow para Razas medianas";
        float cantidad; //alimento
        int numero;
    public:
        //Declaro los metodos que va a tener mi objeto
        /* Constructor
         * @param int:id, string:name, string:raza, int:state, int:age,int:numero
         * @return Objeto 
        */
       Mediano(int ide,string nombre,string especie,int estad, int edad):Perro(ide,nombre,especie,estad,edad){
           numero=numero+ 1;
       }
       //Declaro los metodos que va a tener mi objeto
        /* Constructor
         * @param int:id, int:state, int:age,int:numero
         * @return Objeto 
        */
       Mediano(int ide,int estad, int edad):Perro(ide,estad,edad){
           numero=numero+1;
       }
       float get_cantidad();
       float set_cantidad();
       int get_numero();
};

/*
 * getter cantidad
 * @param
 * @return float:cantidad de alimento del perro
*/
float Mediano::get_cantidad(){
    return cantidad;
};
/*
 * getter age
 * @param
 * @return int:numero del perro
*/
int Mediano::get_numero(){
    return numero;
};
/*
 * setter cantidad
 * @param 
 * @return 
*/
float Mediano::set_cantidad(){
    //AQUI NECESITO PERSONAS PARA PONER COMO FUNCIONA ALIMENTAR
}

//Declaracion de la subclase Pequeno de perro
class Pequeno : public Perro{
    private:
        //Declaro valores de instancia
        string alimento="Dog Chow para Razas pequeñas";
        float cantidad; //alimento
        int numero;
    public:
        //Declaro los metodos que va a tener mi objeto
        /* Constructor
         * @param int:id, string:name, string:raza, int:state, int:age,int:numero
         * @return Objeto 
        */
       Pequeno(int ide,string nombre,string especie,int estad, int edad):Perro(ide,nombre,especie,estad,edad){
           numero=numero+ 1;
       }
       //Declaro los metodos que va a tener mi objeto
        /* Constructor
         * @param int:id, int:state, int:age,int:numero
         * @return Objeto 
        */
       Pequeno(int ide,int estad, int edad):Perro(ide,estad,edad){
           numero=numero+1;
       }
       float get_cantidad();
       float set_cantidad();
       int get_numero();
};

/*
 * getter cantidad
 * @param
 * @return float:cantidad de alimento del perro
*/
float Pequeno::get_cantidad(){
    return cantidad;
};
/*
 * getter age
 * @param
 * @return int:numero del perro
*/
int Pequeno::get_numero(){
    return numero;
};
/*
 * setter cantidad
 * @param 
 * @return 
*/
float Pequeno::set_cantidad(){
    //AQUI NECESITO PERSONAS PARA PONER COMO FUNCIONA ALIMENTAR
}