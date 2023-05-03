// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int main() {
    
    int rows;
    int columns;
    char symbol;
    
    
    for(int i=1;i<=3;i++){ //bucle for que repite 3 veces el bucle que tiene adentro
    for(int i=1;i<=10;i++){ //bucle for que cuenta de 1-10,separando por comas
        cout << i << " ";
    }
    cout <<'\n';
    }
    
    //Ejercicio generador de rectangulo con bucle for
    
    cout << "How many rows?"<<endl;
    cin >> rows;
    cout << "How many columns?"<<endl;
    cin>>columns;
    cout << "Enter a symbol to use: "<<'\n'<<endl;
    cin>>symbol;
    
    for(int i=1;i<=rows;i++){
    for(int i=1;i<=columns;i++){ 
        cout << symbol;
    }
    cout <<'\n';
    }
    
    return 0;
}