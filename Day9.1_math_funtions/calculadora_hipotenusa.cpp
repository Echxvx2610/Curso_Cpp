#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a;
    double b;
    double c;

    cout <<"A: ";cin >> a;
    cout <<"B: ";cin >> b;

    double A = pow(a,2);
    double B = pow(b,2);
    double C = sqrt(A+B);

    cout << "la hipotenusa es: " << C << endl;

    return 0;
}