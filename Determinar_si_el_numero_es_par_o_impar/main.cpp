#include <iostream>
using namespace std;

int main() {


    int numero;
    cout<<"Ingrese un numero y sabra si es par o impar"<<endl;
    cin >> numero;

    if(numero % 2 == 0)
        cout << endl << numero <<" es par\n";
    else
        cout << endl << numero <<" es impar\n";

    return 0;
}
