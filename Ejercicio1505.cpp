#include <iostream>
using namespace std;
/*Numeros pares del 1 al 50*/
int main()
{
    int r, cantidad;
    for (int i = 2; i <= 50; i++)
    {
        r = (i % 2);
    if (r == 0)
    {
        cout << i << endl; //hasta aqui td bien
    }
    cantidad = (i++ / 2);
}

 cout <<"Los numeros pares del 1 al 50 son: " << cantidad << endl; //otro for se tenia que hacer

return 0;
}