#pragma once
#include <string>
#include <iostream>

class Endereco
{
private:
    std::string rua, bairro, cidade, estado, cep;
    int numero;
public:
    Endereco();
    Endereco( std::string rua,std::string bairro,std::string cidade, std::string estado, std::string cep,int numero);
    std::string toString();
     
    std::string getRua();
    std::string getBairro();
    std::string getCidade(); 
    std::string getEstado();
    std::string getCep();
    int getNumero(); 
};