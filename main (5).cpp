
#include <iostream>
using namespace std;
int main()
{

    float precio; // Declaro la primera variable
    float total; // Declaro la segunda variable
    int cantidad; // Declaro la tercera variable
    
    cout << "este programa ve cuanto es el total a abonar"; // indica lo que hace el programa al usuario
    // Solicita al usuario que ingrese el precio y la cantidad
    cout << "Ingrese el precio del artículo: ";
    cin >> precio;
    cout << "Ingrese la cantidad que desea comprar: ";
    cin >> cantidad;

    total = precio * cantidad; // Calcula el total a abonar y guarda el resultado en la variable total

    cout << "El total a abonar es: $" << total << endl; // Muestra el resultado a abonar


    return 0;
}
