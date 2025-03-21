#include <iostream>

int main() {
  int valor = 42; //variavel normal
  int* ptr = &valor; //ponteiro

  std::cout << "valor: " << valor << std::endl;
  std::cout << "endereço de valor: " << &valor << std::endl;
  std::cout << "ponteir armazenado: " << ptr << std::endl;
  std::cout << "valor ponteiro: " << *ptr << std::endl;

  return 0;
}
