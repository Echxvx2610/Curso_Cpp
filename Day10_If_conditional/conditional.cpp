#include <iostream>
using namespace std;

int main(){
    int age;
    
    cout <<"Enter you Age" <<'\n';
    cin >> age;
    
    /*
    if(condicion){
        codigo a ejecutar si la condicion es verdadera
    }
    else if(otra condicion){
        codigo a ejecutar si la primera condicion fue falsa,si no vamos directo a else
    }

    else{
        codigo se ejecuta si no es verdadera la condicion
    }
    */
    
    if(age >= 18){
        cout<<"Welcome to the site!";
    }
    
    else if(age <= 0){
        cout<<"You haven't been born yet!";
    }
    
    else{
        cout<<"You are not enought to enter!";
    }
    
    return 0;
}