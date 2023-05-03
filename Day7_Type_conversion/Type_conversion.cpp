//type conversion
/*
Convertir un tipo de dato en otro,ejemplo
de un numero int a un double(2 --> 2.0)
implicit = automatic
explicit = precede value with new data type
*/
namespace text{
    char z = 100;
}

#include <iostream>
using namespace std;
int main() {
    int x = 3.14;
    double y = 3.14;
    cout <<x<<'\n'; // 3
    cout <<y<<'\n'; //3.14
    //convertir de double a int
    double w = (int)4.13;
    cout << w<<'\n';
    //ejemplos
    char z;
    cout << text::z <<'\n';
    
    int correct = 7;
    int questions = 10;
    double score = correct/(double)questions *100;
    cout <<score<<"%";



    return 0;
}