/*
 *Proyecto
 *Jorge Guerrero Díaz
 *A01411752
 *18/05/2021
*/

/*
 * Clase Persona que contiene los atributos de las 2 subclases:
 * Empleado,Voluntario
 * Junto con los metodos necesarios, como saber la cantidad de horas
 * y cantidad de sueldo
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
        //Declaro metodos que va a tener mi objeto 

        /* Constructor
         * @param int ide,,string nombre,string turnos,int estado
         * @return 
       */
        Persona(int ide, string nombre, string turnos,int estad):id(ide),name(nombre),turno(turnos),state(estad){};
        /* Constructor
         * @param int ide,,string nombre,int estado
         * @return 
       */
        Persona(int ide,string nombre,int estad):id(ide),name(nombre),state(estad){};
        virtual string get_id()=0;
        virtual void set_state()=0;
};

//Declaracion de la subclase Voluntario de persona
class Voluntario : public Persona{
    protected:
        //Declaro variables de mi objeto
        float horas;
    public:
        //Declaro metodos de mi objeto

        /* Constructor
         * @param int ide,,string nombreint estado
         * @return 
        */
        Voluntario(int ide,string nombre,int estad):Persona(ide,nombre,estad){
            horas=0;
        };
        string get_id();
        void set_horas();
        void get_horas();
        void set_state();
};

/* set_state
 * Funcion que nos permite modificar el estado de trabajo
 * y llama la funcion de set_horas
 * @param 
 * @return
*/
void Voluntario::set_state(){
    cout<<"1.-Estan en su turno \n 2.-Acabaron su turno \n 3.-No arrivaron";
    cin>>state;
    set_horas();
};


/* get_id
 * Funcion que nos permite imprimir los datos de informacion del voluntariado
 * mediante la generacion de un string 
 * @param 
 * @return aux.str() (un string)
*/
string Voluntario::get_id(){
    stringstream aux;
    aux<<"La persona "<< id <<" de nombre "<< name <<" se encuentra trabajando (1.-Si 2/3.-No) "<< state <<"\n";
    get_horas();
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


//Declaracion de la subclase Empleado de Persona
class Empleado : public Persona{
    protected:
        //Declaracion de la variables del objeto
        float sueldo;
    public:
        //Declaracion de los metodos de el objeto
        
        /* Constructor
         * Inicializa la variable sueldo;
         * @param int ide,,string nombreint estado,string turnos
         * @return 
        */
        Empleado(int ide,string nombre,int estad,string turnos):Persona(ide,nombre,turnos,estad){
            sueldo=1000;
        };
        string get_id();
        void get_pay();
        void set_pay(); 
        void set_state(); 
};

/* set_state
 * Funcion que nos permite modificar el estado de trabajo de 
 * cada persona y llama la funcion set_pay
 * 
 * @param 
 * @return aux.str()
*/
void Empleado::set_state(){
    cout<<"1.-Estan en su turno \n 2.-Acabaron su turno \n 3.-No arrivaron";
    cin>>state;
    set_pay();
};


/* get_id
 * Funcion que nos permite imprimir los diversos datos de cada empleado 
 * mediante la generacion de una variable tipo stringstream
 * y llama la funcion get_pay
 * 
 * @param 
 * @return aux.str()
*/
string Empleado::get_id(){
    stringstream aux;
    aux<<"La persona "<< id <<" de nombre "<< name << " Turno: "<< turno <<" se encuentra trabajando (1.-Si 2/3.-No) "<< state <<"\n"; 
    get_pay();
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