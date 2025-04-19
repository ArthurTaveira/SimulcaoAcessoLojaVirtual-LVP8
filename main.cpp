#include "Pessoa.hpp"
#include <iostream>

int main() {
    // Criando funcionário e cliente
    Funcionario func("João Silva", "123.456.789-00", "99999-8888", 101, "senha123", 3000.0f);
    Cliente cli("Maria Souza", "987.654.321-00", "88888-9999");

    // Simulando acesso como funcionário
    std::string senhaTentativa;
    std::cout << "Digite a senha do funcionário: ";
    std::cin >> senhaTentativa;

    if (func.verificarSenha(senhaTentativa)) {
        func.imprimirDados();
    } else {
        std::cout << "Senha incorreta!\n";
    }

    // Simulando compra do cliente
    int opcaoProduto;
    std::cout << "\nEscolha um produto:\n";
    std::cout << "1. Produto A - R$ 50.0\n";
    std::cout << "2. Produto B - R$ 30.0\n";
    std::cout << "3. Produto C - R$ 20.0\n";
    std::cout << "Opção: ";
    std::cin >> opcaoProduto;

    switch (opcaoProduto) {
        case 1:
            cli.escolherProduto("Produto A", 50.0f);
            break;
        case 2:
            cli.escolherProduto("Produto B", 30.0f);
            break;
        case 3:
            cli.escolherProduto("Produto C", 20.0f);
            break;
        default:
            std::cout << "Opção inválida!\n";
            return 1;
    }

    cli.imprimirDados();

    return 0;
}
