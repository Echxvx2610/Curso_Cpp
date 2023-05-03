#include <iostream>
using namespace std;

//declaramos un namespace para utilizar el mismo nombre de la varible num
namespace first{ 
    float num = 10.00;
}
//declar un namespace para utilizar el mismo nombre de la varible num
namespace second{
    double num = 10.00;
}

int main(){
    int num = 10;
    cout << sizeof(num)<<endl; //diferentes tamaños en memoria
    cout << sizeof(first::num)<<endl; //diferentes tamaños en memoria
    cout <<sizeof(second::num)<<endl; //diferentes tamaños en memoria
    
    return 0;
}