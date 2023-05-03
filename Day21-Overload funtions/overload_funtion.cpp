//overloaded funtions - funciones sobrecargadas
/*

En términos de C++, la sobrecarga de funciones es una característica del lenguaje que permite definir varias funciones con el mismo nombre
pero con diferentes argumentos. Esto se logra mediante la definición de múltiples funciones con el mismo nombre, pero cada una con una lista de argumentos diferente.
Cuando se llama a una función sobrecargada, el compilador determina cuál función se debe utilizar 
en función de los argumentos que se le pasan. La decisión se toma en tiempo de compilación, basándose en el número, tipo y orden de los argumentos.

*/

#include <iostream>
using namespace std;

void imprimir(int num) {
    cout << "El número es: " << num << endl;
}

void imprimir(string texto) {
    cout << "El texto es: " << texto << endl;
}

int main() {
    imprimir(42); // Llama a la función imprimir(int)
    imprimir("Hola"); // Llama a la función imprimir(string)
    return 0;
}