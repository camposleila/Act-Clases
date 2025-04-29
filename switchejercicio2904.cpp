#include <iostream>
using namespace std;

int main()
{
    int res, n;
    cout << "Hola, podrías ingresar un numero entero" << endl; 
    cin >> n; 

    res = n % 2;

    switch (res)
    {
        case 1:
        cout << n << " es un numero impar" << endl;
        break;
        case 0:
        cout << n << " es un numero par" << endl; 
        break; 
        default:
        cout << "datos incorrectos" << endl; 
        break;
    }

    return 0;
}