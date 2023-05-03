//Bucles en C++

#include <iostream>
using namespace std;


int main() {
    //Bucle "for i in range"
    cout <<"Bucle for,Este es el bucle más común en C++. Se utiliza para iterar una cantidad conocida de veces. "<<endl;
    for(int i=1;i<=10;i++){
        cout << i << "\n ";
    }
    cout <<"\n"<<endl;
    cout <<"Bucle while, Este bucle se utiliza para repetir un bloque de código mientras se cumpla una condición"<<endl;
    //Bucle while;
    int a=1;
    while(a<=10){
        cout<<a<<"\n";
        a++;
    }
    cout <<"\n"<<endl;
    cout <<"Bucle do-while,Este bucle es similar al bucle while, pero garantiza que el bloque de código se ejecutará al menos una vez antes de verificar la condición. "<<endl;
    int b=1;
    do{
        cout << b <<"\n";
        b++;
    }while(b<=10);
    
    return 0;
}