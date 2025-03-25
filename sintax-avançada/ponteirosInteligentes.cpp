#include <iostream>
#include <memory>

int main (int argc, char *argv[]) {
    std::unique_ptr<int> ptr = std::make_unique<int>(50);
    std::cout << "valor: " << ptr << std::endl;

    //memoria liberada automaticamente
    return 0;
}
