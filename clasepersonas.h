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
#ifndef Personas_H_
#define Personas_H_

#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;
class Persona{
    protected:
        //Declaro variables de instancia 
        int id;
        string name;
        int state;
        string turno;
    public:
        Persona(int ide, string nombre, string turnos,int estad):id(ide),name(nombre),turno(turnos),state(estad){};
        Persona(int ide,string nombre,int estad):id(ide),name(nombre),state(estad){};
        virtual string get_id()=0;;
        void set_state();
};

/* set_state
 * Funcion que nos permite modificar la variable de estado del turno de la persona
 * mediante un input
 * 
 * @param 
 * @return 
*/
void Persona::set_state(){
    cout<<"1.-Estan en su turno \n 2.-Acabaron su turno \n 3.-No arrivaron";
    cin>>state;
};

class Voluntario : public Persona{
    protected:
        float horas;
    public:
        Voluntario(int ide,string nombre,int estad,float hour):horas(hour),Persona(ide,nombre,estad){};
        string get_id();
        void set_horas();
        void get_horas();
};


/* get_id
 * Funcion que nos permite imprimir los datos de informacion del voluntariado
 * mediante la generacion de un string 
 * @param 
 * @return aux.str() (un string)
*/
string Voluntario::get_id(){
    stringstream aux;
    aux<<"La persona "<< id <<" de nombre "<< name << " horas: "<< horas <<" se encuentra trabajando (1.-Si 2/3.-No) "<< state <<"\n"; 
    return aux.str();
};


/* set_horas
 * Funcion que nos permite modificar la variable de las horas 
 * del voluntario, se van sumando conforme cuantas haga
 * 
 * @param 
 * @return 
*/
void Voluntario::set_horas(){
    float n;
    cout<<"Cuantas horas se hicieron hoy?";
    cin>>n;
    horas=horas+n;
};

/* get_horas
 * Funcion que nos permite saber la cantidad de horas que ha trabajado el 
 * voluntario.
 * 
 * @param 
 * @return 
*/
void Voluntario::get_horas(){
    cout<<"La persona "<<name<<" lleva "<<horas<<"horas \n";
};


class Empleado : public Persona{
    protected:
        float sueldo;
    public:
        Empleado(int ide,string nombre,int estad,string turnos):Persona(ide,nombre,turnos,estad){
            sueldo=1000;
        };
        string get_id();
        void get_pay();
        void set_pay();  
};

/* get_id
 * Funcion que nos permite imprimir los diversos datos de cada empleado 
 * mediante la generacion de una variable tipo stringstream
 * 
 * @param 
 * @return aux.str()
*/
string Empleado::get_id(){
    stringstream aux;
    aux<<"La persona "<< id <<" de nombre "<< name << " Turno: "<< turno <<" se encuentra trabajando (1.-Si 2/3.-No) "<< state <<"\n"; 
    return aux.str();
};


/* get_pay
 * Funcion que nos permite visualizar el dinero que obtiene un empleado
 * al mes
 * 
 * @param 
 * @return 
*/
void Empleado::get_pay(){
    cout<<"El sueldo actual de la persona :"<<sueldo;
}


/* set_pay
 * Funcion que nos permite modificar la variable de pago de sueldo
 * mediante un input en donde se puede ingresar tanto reduccion 
 * como aumento del saldo
 * 
 * @param 
 * @return 
*/
void Empleado::set_pay(){
    float n;
    cout<<"Deseas añadir un aumento o paga extra al sueldo normal, inserte cantidad:";
    cin>>n;
    sueldo=sueldo+n;
}
#endif