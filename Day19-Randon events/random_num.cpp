
#include <iostream>
using namespace std;


int main() {
    //pseudo-random = not truly random(but close)
    
    srand(time(NULL));
    int num = rand() % 6;
    
    cout <<num;
    
    return 0;
}