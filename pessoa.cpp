#include "Pessoa.hpp"
#include <iostream>

// Implementação da classe Pessoa
Pessoa::Pessoa(const std::string& nome, const std::string& cpf, const std::string& telefone)
    : nome(nome), cpf(cpf), telefone(telefone) {}

// Implementação da classe Funcionario
Funcionario::Funcionario(const std::string& nome, const std::string& cpf, const std::string& telefone, int numeroRegistro, const std::string& senha, float salario)
    : Pessoa(nome, cpf, telefone), numeroRegistro(numeroRegistro), senha(senha), salario(salario) {}

bool Funcionario::verificarSenha(const std::string& senha) const {
    return this->senha == senha;
}

void Funcionario::imprimirDados() const {
    std::cout << "Funcionário:\n";
    std::cout << "Nome: " << nome << "\nCPF: " << cpf << "\nTelefone: " << telefone;
    std::cout << "\nNúmero de Registro: " << numeroRegistro << "\nSalário: R$" << salario << "\n";
}

// Implementação da classe Cliente
Cliente::Cliente(const std::string& nome, const std::string& cpf, const std::string& telefone)
    : Pessoa(nome, cpf, telefone), produto(""), valor(0.0f) {}

void Cliente::escolherProduto(const std::string& produto, float valor) {
    this->produto = produto;
    this->valor = valor;
}

void Cliente::imprimirDados() const {
    std::cout << "Cliente:\n";
    std::cout << "Nome: " << nome << "\nCPF: " << cpf << "\nTelefone: " << telefone;
    std::cout << "\nProduto escolhido: " << produto << "\nValor: R$" << valor << "\n";
}
