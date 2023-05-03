#include <iostream>

/*
Variables
las variables son una reprensentacion de algun numero o valor,
podemos almacenar valores boleanos(true,false),numero enteros(1,2,5,6,8),numeros decimales(1.25,3.26,5.12) ,sentencias("cristian","perro","banana") y caracteres("c","a","u")
*/

int main(){
    //tipos de datos
    //Numeros integrales(Whole numbers)
    
    int x; //declaracion de una variable
    x = 5; // asignar un valor a una varibale
    int y = 6; //otra forma de declarar y asignar un valor en una variable
    int sum = x + y;
    
    //imprimir valores
    std::cout <<"value for x: "<< x << '\n';
    std::cout <<"value for y: "<< y << '\n';
    std::cout <<"value for sum :"<< sum << '\n';
    //Ejemplos de numeros enteros en variables
    int age = 21;
    int year = 2023;
    int days = 7.8; // veamos que pasa si definimos un entero pero es un numero decimal(imprimira 7 ya que redondea a cero,quedando 7)
    
    //imprimir valores
    std::cout <<"age: "<< age << '\n';
    std::cout <<"year: "<<  year << '\n';
    std::cout <<"Days: "<< days << '\n';
    
    //Numeros dobles(Numbers including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;
    
    //imprimir valores
    std::cout <<"price: "<< price << '\n';
    std::cout <<"gpa: "<< gpa << '\n';
    std::cout <<"Temperature: "<< temperature << '\n';
    
    
    //Caracteres(Single character)
    char grade = 'A';
    char initial = 'B';
    char doble_character = 'BC'; //tratemos de almanenar dos caracteres en un char,almacenara el ultimo caracter asignado en este caso C
    
    //imprimir valores
    std::cout << initial << '\n';
    std::cout << grade << '\n';
    std::cout << doble_character << '\n'; 
    
    //datos Boleanos (dos estados: true or false)
    bool student = true;
    bool power = true;
    bool forSale = false;
    //cadenas(strings or secuence of text)
    std::string name = "Cristian";
    std::string day = "Lunes";
    std::string food = "Pizza";
    std::string address = "782 venustiano";
    
    //imprimir valores
    std::cout << name << '\n';
    std::cout << day << '\n';
    std::cout << "Hello "<<name << '\n'; //combinar string con varible
    std::cout <<"You are " <<age<<" years old" <<'\n';
    
    return 0;
}