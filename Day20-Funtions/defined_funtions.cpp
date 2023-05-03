#include <iostream>
#include <math.h>
void happyBirthday(std::string name,int age){
    std::cout << "Happy Birthday to "<< name <<'\n';
    std::cout << "Happy Birthday to "<< name <<'\n';
    std::cout << "Happy Birthday to "<< name <<'\n';
    std::cout << "Happy Birthday to "<< name <<'\n';
    std::cout << "You are "<<age<<" years old"<<'\n';
}

void grettingUser(std::string name){
    std::cout << "Hello "<<name<<std::endl;
}

//funcion de tipo float
float sum(float a,float b){
    float result = a + b;
    std::cout<<result<<'\n';
    return  result;
}

//funcion de tipo int
int pow_num(int a){
    int result = pow(a,2);
    std::cout<<result;
    
}




int main() {
    //funciones = bloques de codigo reusables
    //importante declarar antes declarar funciones antes de int main()
    
    std::string name = "Cristian";
    int age = 21;
    float x = 5.25;
    float y = 3.25;
    int a=5;
    happyBirthday(name,age);
    grettingUser(name);
    sum(x,y);
    pow_num(a);
    return 0;
}
