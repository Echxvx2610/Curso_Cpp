#include <iostream>

char* greeting(std::string name){
    using namespace std;
    cout <<"hello "<<name<<'\n';
    return 0;
}
double calculadora_circunf(){
    using namespace std;
    const double pi = 3.1416;
    double r;
    cout<<"Ingresa el valor del radio: "<<'\n';
    cin >>r;
    double resultado = pi * (r*r);
    cout<<"el valor de la circunferencia es: "<<resultado<<'\n';
    return 0;
}


int main() {
    using namespace std;
    greeting("Cristian");
    calculadora_circunf();
    return 0;
}