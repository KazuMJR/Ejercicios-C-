#include <iostream>
using namespace std;
int main() {

    /*Escribir un programa que pida al usuario un número del 1 al 5 y muestre por pantalla el
     * nombre del día de la semana correspondiente utilizando una estructura switch.*/

    int Numero;

    cout<<"Digite un numero entre 1 y 5\n";
cin>>Numero;
    switch(Numero){
        case 1: cout<<"Lunes"; break;
        case 2: cout<<"Martes"; break;
        case 3: cout<<"Miercoles"; break;
        case 4: cout<<"Jueves"; break;
        case 5: cout<<"Viernes"; break;
        default: cout<<"el numero no esta en el rango";
            break;
    }

    return 0;
}
