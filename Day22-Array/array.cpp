//Array
#include <iostream>
using namespace std;
//Array = a data structure that can hold multiple values,values are accesed by an index number
//Array = una estructura de datos que puede almacenar mulitples valores(valores del mismo tipo:int,float,double,etc..),
//los valores pueden ser accesado por un numero de indexacion
//"Similares a las listas en python"



int main(){
    
    //definir un array(nota: los arrays solo admiten un tipo de dato almacenado)
    string car[] = {"Corvette","Supra","350Z"};
    cout << "\t****Array Cars****"<<endl;
    cout << car[0]<<'\n'; //accesar al elemento de la posicion index 0
    cout << car[1]<<'\n'; //accesar al elemento de la posicion index 1
    cout << car[2]<<'\n'; //accesar al elemento de la posicion index 2
    
    //definicion de segundo array
    string frutas[] = {"Banana","Manzana","Fresa"};
    cout <<"\t****Array frutas****"<<endl;
    cout << frutas[0]<<'\n';

    //cambiar un elemento de un array
    frutas[0]="Sandia";
    cout << frutas[0]<<'\n'; 
    //al imprimir el array frutas ya no aparecera banana puesto que cambiamos el valor del elemento con la posicion 0
    //por sandia
    
    //declara un array vacio (se puede declarar un array vacio e ir agregando los elementos que contendra)
    //nota: cuando se declara un array vacio --> verduras[], se puede definir el tamaño --> verduras[5]
    
    string school[3];
    cout << "\t****Array materias****"<<endl;
    school[0]="Math";
    school[1]="History";
    school[2] = "Spanish";
    
    cout << school[0]<<endl;
    cout << school[1]<<endl;
    cout << school[2]<<endl;
    
    //array type double
    double prices[] = {5.00,7.50,9.99,15.00};
    cout << "\t****Array prices*****"<<endl;
    cout << prices[0]<<'\n';
    cout << prices[1]<<'\n';
    cout << prices[2]<<'\n';
    cout << prices[3]<<'\n';   
    return 0;
}