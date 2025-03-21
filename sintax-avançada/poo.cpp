#include <iostream>
#include <vector>
#include <fstream>

// Classe base
class Funcionario {
protected:
    std::string nome;
    int idade;
    double salario;

public:
    Funcionario(std::string nome, int idade, double salario) 
        : nome(nome), idade(idade), salario(salario) {}

    virtual void exibirInfo() const {
        std::cout << "Nome: " << nome << ", Idade: " << idade 
                  << ", Salário: R$" << salario << std::endl;
    }

    virtual double calcularBonus() const = 0; // Método abstrato

    virtual ~Funcionario() {} // Destrutor virtual
};

// Classe derivada 1
class Desenvolvedor : public Funcionario {
private:
    std::string linguagem;

public:
    Desenvolvedor(std::string nome, int idade, double salario, std::string linguagem) 
        : Funcionario(nome, idade, salario), linguagem(linguagem) {}

    void exibirInfo() const override {
        Funcionario::exibirInfo();
        std::cout << "Linguagem: " << linguagem << std::endl;
    }

    double calcularBonus() const override {
        return salario * 0.10; // 10% de bônus
    }
};

// Classe derivada 2
class Gerente : public Funcionario {
private:
    int equipe;

public:
    Gerente(std::string nome, int idade, double salario, int equipe) 
        : Funcionario(nome, idade, salario), equipe(equipe) {}

    void exibirInfo() const override {
        Funcionario::exibirInfo();
        std::cout << "Equipe de " << equipe << " funcionários" << std::endl;
    }

    double calcularBonus() const override {
        return salario * 0.15; // 15% de bônus
    }
};

// Classe para gerenciar funcionários
class Empresa {
private:
    std::vector<Funcionario*> funcionarios;

public:
    void adicionarFuncionario(Funcionario* func) {
        funcionarios.push_back(func);
    }

    void exibirFuncionarios() const {
        for (const auto& func : funcionarios) {
            func->exibirInfo();
            std::cout << "Bônus: R$" << func->calcularBonus() << "\n" << std::endl;
        }
    }

    // Salva informações em um arquivo
    void salvarFuncionarios() const {
        std::ofstream arquivo("funcionarios.txt");
        if (arquivo.is_open()) {
            for (const auto& func : funcionarios) {
                arquivo << "Nome: " << func->calcularBonus() << "\n";
            }
            arquivo.close();
            std::cout << "Funcionários salvos no arquivo.\n";
        } else {
            std::cout << "Erro ao abrir o arquivo!\n";
        }
    }

    ~Empresa() {
        for (auto& func : funcionarios) {
            delete func;
        }
    }
};

// Função principal
int main() {
    Empresa empresa;

    // Adicionando funcionários
    empresa.adicionarFuncionario(new Desenvolvedor("Alice", 30, 5000, "C++"));
    empresa.adicionarFuncionario(new Gerente("Carlos", 45, 8000, 10));

    // Exibindo dados
    empresa.exibirFuncionarios();

    // Salvando funcionários no arquivo
    empresa.salvarFuncionarios();

    return 0;
}
