#include <iostream>

void mensagem() {
    std::cout << "mensagem" << std::endl;
}

int main() {
    void (*ptrFunc)() = mensagem;
    ptrFunc();

    return 0;
}
