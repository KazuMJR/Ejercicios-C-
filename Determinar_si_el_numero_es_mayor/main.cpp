#include <iostream>
using namespace std;

int main() {

    int Num1;
    int Num2;
    cout<<"Ingrese dos numeros y se le mostrara cual de los dos es mayor\n"<<endl;

    cout<<"Ingrese el primer numero"<<endl;
    cin >> Num1;

    cout<<"Ingrese el segundo numero"<<endl;
    cin >> Num2;

    if(Num1>Num2){
        cout<<"El numero " <<Num1 <<" es mayor que " <<Num2 <<endl;
    }else if(Num2>Num1){
        cout<<"El numero " <<Num2 <<" es mayor que " <<Num1 <<endl;
    }else if(Num1==Num2){
        cout<<"Ambos numeros son iguales"<<endl;
    }

    return 0;
}
