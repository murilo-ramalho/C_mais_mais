#include <iostream>

int main() {
    int tamanho = 5;
    int* array = new int[tamanho];

    for(int i = 0; i < tamanho; i++) {
        array[i] = i * 10;
    }

    for(int i = 0; i < tamanho; i++) {
        std::cout << "elemento " << i << " valor " << array[i] << std::endl;
    }
    
    delete[] array;

    return 0;
}
