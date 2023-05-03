#include <iostream>
using namespace std;

//Operador ternario ?: = remplaza a un if/else condicional
//condicion ? expresion1:expresion2;

int main() {
/* 
    int grade= 75;
    
    if(grade >= 60){
        cout<<"Your pass"<<endl;
    }
    else{
        cout <<"Your fail"<<endl;
    }
*/
    int grade = 75;
    grade >= 60 ? cout<<"Your pass" : cout <<"Your fail";


    return 0;
}