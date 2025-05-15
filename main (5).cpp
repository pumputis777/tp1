
#include <iostream>
using namespace std;
int main()
{
    // Declarar las variables
    float precio;
    float total;
    int cantidad;

    // Solicitar al usuario que ingrese el precio y la cantidad
    cout << "Ingrese el precio del artículo: ";
    cin >> precio;
    cout << "Ingrese la cantidad que desea comprar: ";
    cin >> cantidad;

    // Calcular el total a abonar
    total = precio * cantidad;

    // Mostrar el resultado
    cout << "El total a abonar es: $" << total << endl;


    return 0;
}
