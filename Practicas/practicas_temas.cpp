#include <iostream>
#include <math.h>

using namespace std;

int sum(int a, int b){
    return (a + b);
}
int abs(int x){
    return (x)*(-1);
}


int main(){
    int x;
    int y;
    cout<<"Este mensaje se ve en consola!"<<endl;
    cout <<"X: ";cin>>x;
    cout <<"Y: ";cin>>y;
    cout<<sum(x,y)<<endl; //suma simple de dos numeros
    cout<<abs(x)<<endl; // valor absoluto
    
    return 0;
}
