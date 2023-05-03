//Typedef
/*Los nombres de typedef permiten encapsular detalles de la implementación que pueden cambiar. Una declaración typedef se interpreta igual que una declaración de variable o de función, pero el identificador, en lugar de suponer el tipo especificado por la declaración, se convierte en un sinónimo del tipo.

*/
#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t; 
typedef std::string text_t; //para definir el typedef iniciamos indicandolo y el indentificador que usemos preferentemente debe terminiar con _t ,t de typedef
typedef int number_t;

int main() {
    //std::vector<std::pair<std::string, int>> pair_list;
    //paitlist_t pair_list;
    text_t firstname = "Cristian"; //como se ve en el ejemplo,al inicio con typedef definimos std::string como text por lo que ya no sera necesario escribir std::string cuando queramos definir un string
    number_t age = 21;
    
    std::cout<<firstname<<'\n';
    std::cout<<age<<'\n';
    //otra forma de declarar un identificador(ussing keywords)
    //using text_t = std::string;
    //using number_t = int;
    
    return 0;
}