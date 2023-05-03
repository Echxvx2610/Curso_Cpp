// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    //useful string methods
    string name;
    cout << "Enter your name: ";
    getline(cin,name);
    cout <<name<<endl;
    
    //Metodo length cadena de texto,mide el tamaño de la cadena de texto
    if(name.length() > 12){
        cout << "Yor name can;t be over 12 characters"<<endl;
    }
    else{
        cout <<"Welcome"<<endl;
    }
    
    //empty() method comprueba el estado de una variable y nos dice si esta vacia
    if(name.empty()){
        cout << "You didn't enter your name"<<endl;
    }
    else{
        cout << "Hello " << name<<endl;
    }
    
    //clear() method,borra el valor de una variable
    //name.clear();
    //cout << "Hello "<<endl;
    
    //append() method,agrega cadena de texto en una variable
    name.append("@gmail.com");
    cout << name <<endl;
    
    //at() method,similar al index en listas y tuplas de python
    cout << name.at(0)<<endl;
    cout << name.at(1)<<endl;
    cout << name.at(2)<<endl;
    cout << name.at(3)<<endl;
    
    //insert() method,inserta un caracter en el index indicado
    name.insert(0, "%");
    cout << name<<endl;
    
    //erase() method,borra las posiciones que le indiquemos
    name.erase(5,4);
    cout <<name<<endl;
    //find() method,podemos buscar un caracter en especial
    name.find("@");
    cout << name<<endl;
    return 0;
}