#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float num1, num2, resultado;
    char opcion;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout<< "a. Suma"<<endl;
    cout<< "b. Resta"<<endl;
    cout<< "c. Multiplicacion"<<endl;
    cout<< "d. Division"<<endl;
    cout<< "e. Potencia"<<endl;
    cout<< "Opcion: "<<endl;
    cin >> opcion;

    switch(opcion){
        case 'a':
            resultado = num1 + num2;
            cout << "La suma es: " << resultado << endl;
            break;
        case 'b':
            resultado = num1 - num2;
            cout << "La resta es: " << resultado << endl;
            break;
        case 'c':
            resultado = num1 * num2;
            cout << "La multiplicacion es: " << resultado << endl;
            break;
        case 'd':
            if(num2 != 0){
                resultado = num1 / num2;
                cout << "La division es: " << resultado << endl;
            } else {
                cout << "Error: Division por cero no permitida" << endl;
            }
            break;
        case 'e':
            resultado = pow(num1, num2);
            cout << "La potencia es: " << resultado << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}