#include <iostream>

using namespace std;

int main() {

    //Calculo de factorial usando bucle while

    cout<<"Ingrese un numero para poder calcular su factorial"<<endl;

    int numero, factorial = 1;
    cin>>numero;

    for(int i=1; i<=numero; i++){
    factorial=factorial*i;
    }

    cout<<"\nEl factorial del numero es: "<<factorial<<endl;

    system("pause");
    return 0;
}
