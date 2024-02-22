#include <iostream>
using namespace std;
int main() {

    char continuar;

    do {
    int numero;
    cout<<"Seleccione un numero de acuerdo al programa deseado\n"<<endl;

    cout<<"Programas con sentencia IF-IF ELSE"<<endl;
    cout<<"1. programa que pida al usuario su edad y determine si es mayor de edad o no."<<endl;
    cout<<"2. programa que pida al usuario dos números y determine cuál es el mayor de los dos."<<endl;
    cout<<"3. programa que pida al usuario un número entero y determine si es par o impar.\n"<<endl;
    cout<<"Programas con sentencia FOR-WHILE"<<endl;
    cout<<"4. programa que pida al usuario un número y calcule su factorial utilizando un bucle while."<<endl;
    cout<<"5. programa que pida al usuario un número mayor a 10 y menor que 30,  y que muestre por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle for."<<endl;
    cout<<"6. programa que realice lo mismo que el ejercicio anterior, pero usando el buqle while.\n"<<endl;
    cout<<"Programa con sentencia SWITCH"<<endl;
    cout<<"7. programa que pida al usuario un número del 1 al 5 y muestre por pantalla el nombre del día de la semana correspondiente utilizando una estructura switch.\n"<<endl;
    cin>>numero;

    switch(numero){
        case 1: cout<<"programa que pida al usuario su edad y determine si es mayor de edad o no.";

            cout<<"\nNecesitamos saber si usted tiene la edad suficiente para acceder al programa"<<endl;

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

            cout << "Fin del programa\n"<<endl;
            break;

        case 2: cout<<"programa que pida al usuario dos números y determine cuál es el mayor de los dos.";

            int Num1;
            int Num2;
            cout<<"\nIngrese dos numeros y se le mostrara cual de los dos es mayor\n"<<endl;

            cout<<"Ingrese el primer numero"<<endl;
            cin >> Num1;

            cout<<"Ingrese el segundo numero"<<endl;
            cin >> Num2;

            if(Num1>Num2){
                cout<<"El numero " <<Num1 <<" es mayor que " <<Num2 <<endl;
            }else if(Num2>Num1){
                cout<<"El numero " <<Num2 <<" es mayor que " <<Num1 <<endl;
            }else if(Num1==Num2){
                cout<<"Ambos numeros son iguales\n"<<endl;
            }
            break;

        case 3: cout<<"programa que pida al usuario un número entero y determine si es par o impar.";

            int numero4;
            cout<<"\nIngrese un numero y sabra si es par o impar"<<endl;
            cin >> numero4;

            if(numero4 % 2 == 0)
                cout << endl << numero4 <<" es par\n";
            else
                cout << endl << numero4 <<" es impar\n"; break;

        case 4: cout<<"programa que pida al usuario un número y calcule su factorial utilizando un bucle while.";

            cout<<"\nIngrese un numero para poder calcular su factorial"<<endl;

            int numero2, factorial;
            factorial = 1;
            cin>>numero2;

            for(int i=1; i<=numero2; i++){
                factorial=factorial*i;
            }

            cout<<"\nEl factorial del numero es: "<<factorial<<endl;
            break;

        case 5: cout << "programa que pida al usuario un número mayor a 10 y menor que 30,  y que muestre por pantalla todos los números impares desde 1 hasta ese número utilizando un bucle for.";

            cout << "\nIngrese un numero que sea mayor que 10 y menor que 30: "<<endl;
            int Numero1;
            cin >> Numero1;

            cout << "\nLos numeros impares del 1 Hasta: " << Numero1 << " son:" << endl;

            if (Numero1 >= 10 && Numero1 <= 30) {
                for (int i = 1; i <= Numero1; i++) {
                    if (i % 2 != 0) {
                        cout << i << endl;
                    }
                }
            } else {
                cout << "El número ingresado no es válido\n" << endl;
            }
            break;

        case 6: cout << "programa que realice lo mismo que el ejercicio anterior, pero usando el bucle while." << endl;
            cout << "\nIngrese un numero que sea mayor que 10 y menor que 30: "<<endl;
            int Numero3;
            cin >> Numero3;

            if (Numero3 >= 10 && Numero3 <= 30) {
                cout << "\nLos numeros impares del 1: " << " Hasta: " << Numero3 << " son:" << endl;
                int i = 1;
                while (i <= Numero3) {
                    if (i % 2 != 0) {
                        cout << i << endl;
                    }
                    i++;
                }
            } else {
                cout << "El numero ingresado no es valido\n" << endl;
            }
            break;

        case 7: cout<<"programa que pida al usuario un número del 1 al 5 y muestre por pantalla el nombre del día de la semana correspondiente utilizando una estructura switch.";

            int Numero;

            cout<<"\nDigite un numero entre 1 y 5 ";
            cin>>Numero;
            switch(Numero){
                case 1: cout<<"Lunes\n"; break;
                case 2: cout<<"Martes\n"; break;
                case 3: cout<<"Miercoles\n"; break;
                case 4: cout<<"Jueves\n"; break;
                case 5: cout<<"Viernes\n"; break;
                default: cout<<"el numero no esta en el rango\n";
                    break;
            }
            break;

        default: cout<<"el numero no esta en el rango\n";
            break;
    }
    cout << "Desea realizar otro programa? (S/N): ";
    cin >> continuar;

} while (continuar == 's' || continuar == 'S');

cout << "Fin del programa" << endl;
    return 0;
}