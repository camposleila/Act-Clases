#include <iostream>
using namespace std; 

int main(){
    int numeros [5] = {1, 2, 3, 4, 5}; //Declaración del arreglo con valores

    cout << "Contenido del arreglo:" << endl; 

    // Recorrer el arreglo y mostrar sus elementos
    for (int i = 0; i < 5; i++) {
        cout << "Elementos en la posicion " << i << ": " << numeros [i] << endl; 
    }
    return 0; 
}