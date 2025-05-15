
#include <iostream>
using namespace std;
int main()
{

    float num1; // Declaro la primera variable
    float num2; // Declaro la segunda variable
    float num3; // Declaro la tercera variable
    float num4; // Declaro la cuarta variable
    float suma; // Declaro la quinta variable
    float producto; // Declaro la sexta variable
    cout << "este programa suma los dos primeros numeros y multiplica los ultimos dos"; //le indica al usuario lo que hace el programa
    // Solicitar al usuario que ingrese los cuatro números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;
    cout << "Ingrese el cuarto número: ";
    cin >> num4;

    suma = num1 + num2; // Calcula la suma de los dos primeros números y lo guarda en la variable suma

    producto = num3 * num4; // Calcula el producto de los dos ultimos números y lo guarda en la variable producto

    // Mostrar los resultados
    cout << "La suma de los dos primeros números es: " << suma << endl; // Muestra el resultado de la suma
    cout << "El producto del tercero y cuarto número es: " << producto << endl; // Muestra el resultado del producto
    return 0;
}
