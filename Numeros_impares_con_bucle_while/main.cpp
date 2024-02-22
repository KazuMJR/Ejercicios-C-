#include <iostream>

using namespace std;
int main() {

    /*número mayor a 10 y menor que 30,  y que muestre por pantalla
     * todos los números impares desde 1 hasta ese número utilizando
     * un bucle while*/

    cout << "Ingrese un numero que sea mayor que 10 y menor que 30"<<endl;
    int Numero1;

    cout<<"Digite el numero"<<endl;
   cin >>Numero1;

    if (Numero1 >= 10 && Numero1 <= 30) {
        cout <<"\nLos numeros impares del 1: "<< " Hasta: "<< Numero1 << " son:"<<endl;
        int i = 1;
        while (i <= Numero1) {
            if (i % 2 != 0) {
                cout << i << endl;
            }
            i++;
        }
    } else {
        cout << "El numero ingresado no es valido" << endl;
    }

    return 0;
}