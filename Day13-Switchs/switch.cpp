#include <iostream>
using namespace std;

//Switch,alternativa a "else if" o elif en mulitples opciones o condiciones

int main() {
    int month;
    cout << "Enter the month (1-12): ";
    cin>>month;
    
    switch(month){
        case 1:
        cout << "Enero"<<endl;
        break;
        case 2:
        cout << "Febrero"<<endl;
        break;
        case 3:
        cout << "Marzo"<<endl;
        break;
        case 4:
        cout << "Abril"<<endl;
        break;
        case 5:
        cout << "Mayo"<<endl;
        break;
        case 6:
        cout << "Junio"<<endl;
        break;
        case 7:
        cout << "Julio"<<endl;
        break;
        case 8:
        cout << "Agosto"<<endl;
        break;
        case 9:
        cout << "Septiembre"<<endl;
        break;
        case 10:
        cout << "Octubre"<<endl;
        break;
        case 11:
        cout << "Noviembre"<<endl;
        break;
        case 12:
        cout << "Diciembre"<<endl;
        break;
        default:
        cout<<"That's dosnt a number"<<endl;
        break;
    }
    
    return 0;
}