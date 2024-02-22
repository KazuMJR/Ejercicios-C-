#include <iostream>
using namespace std;

int main() {

    cout<<"Necesitamos saber si usted tiene la edad suficiente para acceder al programa"<<endl;

    int Edad;
    cout << "ingrese su edad \n";
    cin >> Edad;
    if(Edad>=18 && Edad<=100){
        cout << "cumples con la edad suficiente \n"<<endl;
    } else if(Edad<=17 && Edad>=5){
        cout << "No cumples con la edad suficiente para acceder \n"<<endl;
    }if(Edad<=4){
        cout <<"Te has pasado un poco con lo de ser menor no crees? \n"<<endl;
    }if(Edad>=101){
        cout << "Enserio tienes esa edad?"<<endl;
    }

    cout << "Fin del programa"<<endl;
    return 0;
}