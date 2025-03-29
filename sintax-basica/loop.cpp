#include <iostream>

int main() {
    int contador;

    for(int i = 0; i <= 10; i++){
        std::cout << "loop for: " << i << std::endl;
    }

    contador = 0;
    while (contador <= 10) {
        std::cout << "loop while: " << contador << std::endl;
        contador++;
    }

    contador = 0;
    do {
        std::cout << "loop do while: " << contador << std::endl;
        contador++;
    } while(contador<10);

    contador = 0;
    loop: // goto é go to <codigo>, é um salto para uma parte do codigo;
    if(contador > 10){
        goto exit;
    }
    std::cout << "loop goto: " << contador << std::endl;
    contador++;
    goto loop;
    exit:

    return 0;
}
