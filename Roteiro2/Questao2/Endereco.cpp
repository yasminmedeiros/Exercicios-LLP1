#include "Endereco.h"
#include <sstream>
#include <string>

using namespace std;

Endereco::Endereco(){
    this->rua="0";
    this->bairro="0";
    this->cidade= "0";
    this->estado="0";
    this->cep="0";
    this->numero=0;

}
Endereco::Endereco( std::string rua,
                    std::string bairro,
                    std::string cidade, 
                    std::string estado, 
                    std::string cep,
                    int numero)
{
    this->rua=rua;
    this->bairro=bairro;
    this->cidade= cidade;
    this->estado=estado;
    this->cep=cep;
    this->numero=numero;
}
std::string Endereco::toString(){
    stringstream num1;
    num1 << numero;
return "Rua: "+ this->rua + ", Num: "+ num1.str() + 
        " , Bairro: "+ this->bairro + " ,Cidade: "+ this->cidade +
        " , Estado: " + this->estado + " , CEP: " + this->cep;
}
std::string Endereco::getRua(){return this->rua;}
std::string Endereco::getBairro(){return this->bairro;}
std::string Endereco::getCidade(){return this->cidade;}
std::string Endereco::getEstado(){return this->estado;}
std::string Endereco::getCep(){return this->cep;}
int Endereco::getNumero(){return this->numero;}