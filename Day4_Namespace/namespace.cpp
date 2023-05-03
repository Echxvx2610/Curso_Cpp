#include <iostream>

using namespace std;

//namespace: proveen una solucion para prevenir conlficto de nombres en un proyecto,por ejemplo podemos tener la misma variable x con diferentes en valores en diferentes namespace

namespace first{
    int x = 10;
}

namespace second{
    int x = -5;
}

int main(){

    int x = 2; // en nuestro programa pricipal el valor de x es 2
    cout << "El Valor de x en el programa principal es: " << x <<endl;
    cout << "El valor de x en el namespace first es: "<< first::x << endl;
    cout <<"El valor de x en el namespace second es: "<< second::x<< endl;
    // como se observa pudimos utilizar el mismo nombre de la variable sin conflictos de nombre.
    return 0;
}