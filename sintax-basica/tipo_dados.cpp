#include <iostream>

int main (int argc, char *argv[]) {
    std::cout << "tipos primitivos\n";
    int inteiro = 1; // 4 bytes -2,147,483,648 a 2,147,483,647
    float flutuante = 2.0; // 4 bytes	±3.4E−38 a ±3.4E+38
    double flutuante_grande = 2.291; // 8 bytes	±1.7E−308 a ±1.7E+308
    char letra = 'a'; // 1 byte	0 a 255 (valores ASCII)
    bool booleano = true; // 1 byte	true ou false
    void funcao(); // 0 bytes Sem valor (usado em funções)
    std::cout << "int, float, double, char, bool, void\n";

    std::cout << "modificadores de tipo\n";
    short int curto = 2; // 2 bytes
    long int longo = 22222222; // 8 bytes
    unsigned int nonNegativo = 1; // apenas valores positivo 
    signed int positivo = -1; // permite valores negativos e positivos;
    std::cout << "short, long, unsigned, signed\n";

    std::cout << "tipos compostos\n";
    std::string nome = "murilo";
    int arrays[5] = {1,2,3,4,5};
    int vetor[5][5] = {{1,2,3,4,5},{1,2,3,4,5}};
    int matriz[5][5][5] = {{1,2,3,4,5}, {1,2,3,4,5}, {1,2,3,4,5}};
    enum cores {red,yellow};
    struct Pessoa {
        int idade;
        float altura;
    };
    int *ponteiro = &inteiro;
    std::cout << "string, arrays, struct, enum, ponteiro";

    return 0;
}
