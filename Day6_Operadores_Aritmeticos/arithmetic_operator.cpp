//Operadores aritmeticos     
//regresan el resultado de una operacion aritmetica(+,-,*,/)
//se respeta la jera de la aritmetica
#include <iostream>

int main() {
    
    int students = 20;
    //SUMA
    students = students + 1;
    std::cout <<"Suma: "<<students<<'\n';
    //incrementar en uno una variable:students++;
    /*
    otra forma de representarlo seria con
    students += 1;
    */
    
    //RESTA
    students = students - 1;
    std::cout <<"Resta: "<<students<<'\n';
    //decrementar en uno una variable:students--;
    /*
    otra forma de representarlo seria con
    students -= 1;
    */
    
    //MULTIPLICACION
    students = students * 2;
     /*
    otra forma de representarlo seria con
    students *= 2;
    */
    std::cout <<"Multiplicacion: "<< students<<'\n';
    
    //DIVISION
    students =students / 2;
    std::cout <<"Division: "<< students<<'\n';
     /*
    otra forma de representarlo seria con
    students /= 2;
    */
    
    
    return 0;
}