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
string Voluntario::get_id(){
    stringstream aux;
    aux<<"La persona "<< id <<" de nombre "<< name << " horas: "<< horas <<" se encuentra trabajando (1.-Si 2/3.-No) "<< state <<"\n"; 
    return aux.str();
};
void Voluntario::set_horas(){
    float n;
    cout<<"Cuantas horas se hicieron hoy?";
    cin>>n;
    horas=horas+n;
};
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
string Empleado::get_id(){
    stringstream aux;
    aux<<"La persona "<< id <<" de nombre "<< name << " Turno: "<< turno <<" se encuentra trabajando (1.-Si 2/3.-No) "<< state <<"\n"; 
    return aux.str();
};
void Empleado::get_pay(){
    cout<<"El sueldo actual de la persona :"<<sueldo;
}
void Empleado::set_pay(){
    float n;
    cout<<"Deseas añadir un aumento o paga extra al sueldo normal, inserte cantidad:";
    cin>>n;
    sueldo=sueldo+n;
}
#endif