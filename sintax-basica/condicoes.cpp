#include <iostream>

int main(){
    int idade;
    std::cout << "digite sua idade: ";
    std::cin >> idade;

    if(idade < 18){
        std::cout << "de menor" << std::endl;
    } else if (idade < 60) {
        std::cout << "de maior" << std::endl;
    } else {
        std::cout << "idoso" << std::endl;
    }

    return 0;
}
