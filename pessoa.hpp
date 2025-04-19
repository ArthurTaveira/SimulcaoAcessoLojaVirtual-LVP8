#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

class Pessoa {
protected:
    std::string nome;
    std::string cpf;
    std::string telefone;

public:
    Pessoa(const std::string& nome, const std::string& cpf, const std::string& telefone);
    virtual void imprimirDados() const = 0;
    virtual ~Pessoa() = default;
};

class Funcionario : public Pessoa {
private:
    int numeroRegistro;
    std::string senha;
    float salario;

public:
    Funcionario(const std::string& nome, const std::string& cpf, const std::string& telefone, int numeroRegistro, const std::string& senha, float salario);
    bool verificarSenha(const std::string& senha) const;
    void imprimirDados() const override;
};

class Cliente : public Pessoa {
private:
    std::string produto;
    float valor;

public:
    Cliente(const std::string& nome, const std::string& cpf, const std::string& telefone);
    void escolherProduto(const std::string& produto, float valor);
    void imprimirDados() const override;
};

#endif
