#include <iostream>
#include <ostream>

int main() {
    int* ptr = new int;
    *ptr = 10;

    std::cout << "valor do ponteiro: " << *ptr << std::endl;
    std::cout << "memoria do ponteiro: " << ptr << std::endl;

    delete ptr; //libera memoria 
    ptr = nullptr; //evita ponteiro danificado

    return 0;
}
