#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main () {
    // [ captura ] ( parâmetros ) -> tipo_de_retorno { corpo_da_função };
    // é uma função anõnimas
    auto soma = [](int a, int b){return a+b;};
    cout << "lambda soma: " << soma(1,3) << endl;

    // = permite que a lambda copie variáveis externas
    int x = 10;
    auto mostrarX = [=](){return x;};
    cout << "lambda variavel externa: " << mostrarX() << endl;

    // & A variável externa é referenciada, permitindo modificações
    auto somar = [&](){x += 5;};
    somar();
    cout << "lambda modificação externa: " << x << endl;

    // misto
    int b = 2;
    auto subtrair = [x, &b](){x-b;};
    subtrair();
    cout << "x: " << x << endl;

    function<int(int,int)> multiplicacao = [](int a, int b){return a*b;};
    cout << "lambda flexivel: " << multiplicacao(3, 7) << endl;

    return 0;
}
