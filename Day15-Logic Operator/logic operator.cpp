#include <iostream>
using namespace std;

// && = comprueba si dos condiciones son verdaderas
// || = comprueba si uno de las dos condiciones son verdaderas

// ! = invierte el estado logico o el operador

//ademas de and,or,not etc



int main() {
    int temp;
    cout << "Enter de temperature: "<<endl;
    cin >>temp;
    if(temp > 0 && temp < 30){
        cout << "the temperature is good!"<<endl;
    }
    else{
        cout<<"The temperature is bad!"<<endl;
    }

    return 0;
}