/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    float lado, perimetro;

    // Solicitar al usuario que ingrese el valor del lado
    cout << "Ingrese el valor del lado del cuadrado: ";
    cin >> lado;

    // Calcular el perímetro
    perimetro = 4 * lado;

    // Mostrar el resultado
    cout << "El perímetro del cuadrado es: " << perimetro << endl;

    return 0;
}