#pragma once
#include <iostream>
#include "Endereco.h"
#include <string>


class Pessoa
{
private:
    std::string nome, telefone;
    Endereco endereco;
public:
    Pessoa(std::string nome);
    Pessoa (std::string nome, std::string telefone, Endereco endereco);
    std::string getNome ();
    std::string getTelefone ();
    std::string getEndereco();
    void setNome(std::string nome);
    void setTelefone(std::string telefone);
    void setEndereco(Endereco endereco);
    
};

