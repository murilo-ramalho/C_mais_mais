#include <iostream>

int main (int argc, char *argv[]) {
    int a = 7;
    int b = 4;

    std::cout << "soma: " << a+b 
        << "\nsubtração: " << a-b 
        << "\ndivisão: " << a/b
        << "\nmultiplicação: " << a*b
        << "\nmod: " << a%b;

    a += 10;
    std::cout << "\nincremento: " << a;
    a -= 10;
    std::cout << "\ndecremento: " << a;
    a *= 10;
    std::cout << "\nmulticremento: " << a;
    a /= 10;
    std::cout << "\ndivcremento: " << a;
    
    for(int i = 0; i<10;i++) {
        std::cout << "\nincremento ++: " << i;
    }
    for(signed int i = 0; i > -10; i--) {
        std::cout << "\ndecremento --: " << i;
    }
    return 0;
}
