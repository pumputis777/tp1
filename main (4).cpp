
#include <iostream>
using namespace std;
int main()
{

    float num1; // Declaro la primera variable
    float num2; // Declaro la segunda variable
    float num3; // Declaro la tercera variable
    float num4; // Declaro la cuarta variable
    float suma; // Declaro la quinta variable
    float promedio; // Declaro la sexta variable
    
    cout << "este programa suma 4 numeros y despues hace el proemdio" <<endl; //le indica al usuario lo que hace el programa
    // Solicitar al usuario que ingrese los cuatro números
    cout << "Ingrese el primer número: ";
    cin >> num1;
    cout << "Ingrese el segundo número: ";
    cin >> num2;
    cout << "Ingrese el tercer número: ";
    cin >> num3;
    cout << "Ingrese el cuarto número: ";
    cin >> num4;

    suma = num1 + num2 + num3 + num4; // Calcula la suma de los cuatro números

    promedio = suma / 4; // Calcula el promedio

    cout << "La suma de los cuatro números es: " << suma << endl; // Muestra el resultado de la suma
    cout << "El promedio de los cuatro números es: " << promedio << endl; // Muestra el resultado del promedio

    return 0;
}
