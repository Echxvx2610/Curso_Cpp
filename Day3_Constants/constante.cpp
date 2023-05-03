//constantes
/*
Los valores constantes son una varible en donde el valor siempre es el mismo,como por ejemplo:pi(3.1416),gravedad(9.81),etc.
*/
#include <iostream>


int main() {
    //Ejemplo calculadora de circunferencia de circulo
    const double PI =3.14159; //constante,definimos que pi sera constante, al hacer esto la variable pasa a un modo read-only
    //PI = 426.12; // si tratamos de asignarle otro valor a PI,nos dira que la variable se encuentra en modo read-only
    double radius = 10;
    double circunference = 2 * PI * radius;
    
    std::cout << circunference << "cm";
    //Ejemplo de uso de constantes
    const int LIGTH_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;
    
    return 0;
}