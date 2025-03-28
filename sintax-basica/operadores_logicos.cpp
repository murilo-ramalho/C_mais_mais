#include <iostream>

int main (int argc, char *argv[]) {
    if (true && true){
        std::cout << "and &&\n";
    }
    if(true || false) {
        std::cout << "or ||\n";
    }
    if(!false) {
        std::cout << "not !\n";
    }

    return 0;
}
