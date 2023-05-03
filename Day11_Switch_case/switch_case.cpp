#include <iostream>
using namespace std;

/*
El uso de switch es para probeer una multi-opcion como si se usuara varios if 
ya que en el ejemplo siguiente se aprecia que definimos varias opciones, y nos dice lo siguiente:
con switch(opc) decimos que dado el caso(case "+") de suma entonces realizaremos una suma con los datos ingresados,
no necesariamente tiene que ser una suma si no que, si en nuestro switch un case se cumple realizaremos el bloque de codigo
para ese case.
Nota:la estructura switch siempre termina con un default y su estructura general es la sig.

switch(opciones){
	case '': bloque de codigo;a
	break
	case '': bloque de codigo;
	break
	case '': bloque de codigo;
	break
	......
	default: bloque de codigo;
}

*/

int main(){
	float a=0;
	float b=0;
	char opc;
	float result=0;
	
	cout << "******************************************"<<endl;
	cout << "**** Que operacion deseas realizar? ******"<<endl;
	cout << "*****           suma (+)            ******"<<endl;
	cout << "*****           resta (-)           ******"<<endl;
	cout << "*****        multiplicacion(*)      ******"<<endl;
	cout << "*****          division (/)         ******"<<endl;
	cout << "******************************************"<<endl;
	cin >>opc;
	
	switch(opc){
		case '+':cout<<"Ingrese el valor de a: ";cin>>a;
		cout<<"Ingrese el valor de b: ";cin>>b;
		result = a + b;
		cout<<"El resultado es: "<<result<<endl;
		break;
		case '-':cout<<"Ingrese el valor de a: ";cin>>a;
		cout<<"Ingrese el valor de b: ";cin>>b;
		result = a - b;
		cout<<"El resultado es: "<<result<<endl;
		break;
		case '*':cout<<"Ingrese el valor de a: ";cin>>a;
		cout<<"Ingrese el valor de b: ";cin>>b;
		result = a * b;
		cout<<"El resultado es: "<<result<<endl;
		break;
		case '/':cout<<"Ingrese el valor de a: ";cin>>a;
		cout<<"Ingrese el valor de b: ";cin>>b;
		result = a / b;
		cout<<"El resultado es: "<<result<<endl;
		break;	
		default:cout<<"No has seleccionado una opcion valida";
	}
	return 0;
}