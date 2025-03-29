#include <iostream>
#include <string>
using namespace std;

class Print {
public:
    void print(int i){
        cout << i << endl;
    }
    void print(double i){
        cout << i << endl;
    }
    void print(string i){
        cout << i << endl;
    }
};

int main (int argc, char *argv[]) {
    Print p;

    p.print(1);
    p.print(2.09);
    p.print("ola");

    return 0;
}
