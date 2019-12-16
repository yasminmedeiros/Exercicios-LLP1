#include <iostream>
#include <string>
#include "Trabalhador.h"
#include "TrabalhadorAssalariado.h"
#include "TrabalhadorPorHora.h"

using namespace std;

int main (void){
    TrabalhadorAssalariado *trabalhador1= new TrabalhadorAssalariado("Juca",2000.00);
    TrabalhadorPorHora *trabalhador2= new TrabalhadorPorHora("Jonas",400.00,10.00);

    cout<<"Nome 1: "<<trabalhador1->getNome()<< "\n\tSalario Mensal 1: "<<trabalhador1->calculoDoSalarioMensal();
    cout<<"\n\tSalario Semanal 1: "<<trabalhador1->calculoDoSalarioSemanal()<<endl;

    cout<<"Nome 2: "<<trabalhador2->getNome()<< "\n\tSalario Mensal 2: "<<trabalhador2->calculoDoSalarioMensal();
    cout<<"\n\tSalario Semanal 2: "<<trabalhador2->calculoDoSalarioSemanal();
    cout<<"\n\tHoras Trabalhadas Por Semana: "<<trabalhador2->horasTrabalhadas()<< endl;

    return 0;

}