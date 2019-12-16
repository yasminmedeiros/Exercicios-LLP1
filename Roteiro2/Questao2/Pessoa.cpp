#include "Pessoa.h"
#include "Endereco.h"
#include <string>
using namespace std;

Pessoa::Pessoa(std::string nome)
{
    setNome(nome);
    setTelefone("0");
    setEndereco(Endereco());
}
Pessoa::Pessoa (std::string nome, std::string telefone, Endereco endereco){
    setNome(nome);
    setTelefone(telefone);
    setEndereco(endereco);
}
std::string Pessoa::getNome (){return this->nome;}
std::string Pessoa::getTelefone (){return this->telefone;}
std::string Pessoa::getEndereco(){
    return this->endereco.toString();}
void Pessoa::setNome(std::string nome){this->nome=nome;}
void Pessoa::setTelefone(std::string telefone){this->telefone=telefone;}
void Pessoa::setEndereco(Endereco endereco){this->endereco=endereco;}
