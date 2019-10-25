#include <iostream>
#include <map>

using namespace std;

int main()
{
    // Crear un diccionario donde el primer valor es el articulo, y el segundo
    // es el precio. Inventario.
    map<int, float> inv;
    int codigo;

    // Agregando valores al inventario.
    inv[101] = 1038.57;
    inv[102] = 2272.67;
    inv[103] = 2677.08;
    inv[104] = 2819.47;

    cout << "Codigo: ";
    cin >> codigo;

    cout << "El precio es: $" << inv[codigo];

    return 0;
}
