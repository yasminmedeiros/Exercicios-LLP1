#include <iostream>
#include "Endereco.h"
#include "Pessoa.h"

using namespace std;
int main (void){
    Endereco end1=  Endereco("Rua dos Escoteiro","Portal do Sol","Joao Pessoa", "Paraíba","0000-000", 0);
    Pessoa *pessoa1=new Pessoa("Julia", "8499801684", end1);
    
    cout<<"Nome 1: "<<pessoa1->getNome()<<"\n\tNumero de Telefone 1: "<< pessoa1->getTelefone();
    cout<<"\n\tEndereço 1: "<<pessoa1->getEndereco();


}