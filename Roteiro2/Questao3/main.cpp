#include <iostream>
#include "Consultor.h"
#include "Funcionario.h"
#include <string>
using namespace std;
int main (void){
    Consultor *cons1 = new Consultor(1192992,3300.00, "Julius");
    Funcionario *fun1= new Funcionario(29383,2000.00,"Carla");

    double comAcrescimo = cons1->getSalario(0.15);
    

    cout<<"Nome 1: "<<cons1->getNome()<<"\n\tSalario com acrescimo: "<<cons1->getSalario(0.15);
    cout<<"\n\tMatricula: "<<cons1->getMatricula()<<endl;
    cout<<"Nome 2: "<<fun1->getNome()<<"\n\tSalario sem acrescimo: "<<fun1->getSalario();
    cout<<"\n\tMatricula: "<<fun1->getMatricula()<<endl;
    return 0;
}