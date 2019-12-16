#include "FiguraGeometrica.h"
#include <string>
FiguraGeometrica::FiguraGeometrica(std::string nome, double tamanho){
    setTamanho(tamanho);
    setNome(nome);
}
double FiguraGeometrica::calculaArea(){ return 0.0;}
std::string FiguraGeometrica::getNome(){return this->nome;}
double FiguraGeometrica::getTamanho(){return this->tamanho;}
void FiguraGeometrica::setNome (std::string nome){this->nome=nome;}
void FiguraGeometrica::setTamanho(double tamanho){this->tamanho=tamanho;}