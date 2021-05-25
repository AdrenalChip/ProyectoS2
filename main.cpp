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
#include <claseperro.h>
#include <refugio.h>
using namespace std;
void main (){
    int x=1;
    while (x=1){
        cout<<"1.-Personal \n 2.-Registro Perro";
        int n;
        cin>>n;
        if (n==1){
            //FUNCION PERSONAL
        }
        else if (n==2){
            Refugio *Jorge;
            Jorge->agrega_grande(2,"Paquito","Husky",2,13);
            Jorge->mostrar();

        }
    }
}