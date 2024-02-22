#include <iostream>

using namespace std;
int main() {

    /*número mayor a 10 y menor que 30,  y que muestre por pantalla
     * todos los números impares desde 1 hasta ese número utilizando
     * un bucle for*/

    cout << "Ingrese un numero que sea mayor que 10 y menor que 30"<<endl;
    int Numero1;

    cout<<"Digite el numero"<<endl;
   cin >>Numero1;

    cout <<"\nLos numeros impares del 1 Hasta: "<< Numero1 << " son:"<<endl;

    if (Numero1 >= 10 && Numero1 <= 30) {
        for (int i = 1; i <= Numero1; i++) {
            if (i % 2 != 0) {
                cout << i << endl;
            }
        }
    } else {
        cout << "El número ingresado no es válido" << endl;
    }
    return 0;
}