#include <iostream>
using namespace std;

int main(){
    
    string students[] = {"Cristian","Luis","Alejandro"};
    cout << "\t**** Array estudiantes ****"<<endl;
    cout << students[0]<<endl;
    cout << students[1]<<endl;
    cout << students[2]<<endl;
    
    
    cout << "\t**** Interar en un Array****"<<endl;
    //creamos un ciclo for para interar en el array,donde imprimira cada uno de los elementos del array
    for(int i = 0;i < 3;i++){
        cout << students[i]<<'\n';
    }
    
    return 0;
}