#include "Quadrado.h"
Quadrado::Quadrado(std::string nome,double tamanho) : FiguraGeometrica(nome,tamanho){
}
double Quadrado::calculaArea(){
    return FiguraGeometrica::getTamanho()*FiguraGeometrica::getTamanho();
}