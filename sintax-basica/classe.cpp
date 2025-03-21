#include <iostream>

class Carro {
public:
    std::string marca;
    int ano;

    void exibirInfo() {
        std::cout << "carro: " << marca << " ano " << ano << std::endl;
    }
};

int main() {
    Carro carroExemplo;
    carroExemplo.marca = "Toyota";
    carroExemplo.ano = 2018;
    carroExemplo.exibirInfo();

    return 0;
}
