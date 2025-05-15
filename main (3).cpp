
#include <iostream>
using namespace std;
int main()
{
// Declarar las variables
    float num1;
    float num2;
    float num3;
    float num4;
    float suma;
    float producto;
    cout << "este programa suma los dos primeros numeros y multiplica los ultimos dos";
    // Solicitar al usuario que ingrese los cuatro números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;
    cout << "Ingrese el cuarto número: ";
    cin >> num4;

    // Calcular la suma de los dos primeros números
    suma = num1 + num2;

    // Calcular el producto del tercero y cuarto número
    producto = num3 * num4;

    // Mostrar los resultados
    cout << "La suma de los dos primeros números es: " << suma << endl;
    cout << "El producto del tercero y cuarto número es: " << producto << endl;
    return 0;
}
