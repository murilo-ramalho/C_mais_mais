#include <iostream>
#include <ostream>

struct Pessoa{
    std::string nome;
    int idade;
};

int main (int argc, char *argv[]) {
    Pessoa* p = new Pessoa{"Jão", 25};
    
    std::cout << "nome: " << p->nome << ", idade: " << p->idade << std::endl;
    
    delete p;

    return 0;
}
