#include <iostream>

using namespace std;

int main() {

    // Cálculo de factorial usando bucle while

    cout << "Ingrese un numero para poder calcular su factorial" << endl;

    int numero, factorial = 1;
    cin >> numero;

    int i = 1;
    while (i <= numero) {
        factorial = factorial * i;
        i++;
    }

    cout << "\nEl factorial del numero es: " << factorial << endl;

    system("pause");
    return 0;
}
