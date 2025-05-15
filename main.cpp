
#include <iostream>
using namespace std;
int main()
{
    float lado; // declaro la primera variable
    float perimetro; // declaro la segunda variable

    cout << "Ingrese el valor del lado del cuadrado: "; // Solicita al usuario que ingrese el valor del lado
    cin >> lado; //guarda el valor dado por el usuario en la variable lado


    perimetro = 4 * lado; // Calcula el perímetro multiplicando el lado por 4 y lo guarda en la variable perimetro


    cout << "El perímetro del cuadrado es: " << perimetro << endl; // Muestra el resultado

    return 0;
}
