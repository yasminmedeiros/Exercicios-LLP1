#include <iostream>
#include "ControleDeGastos.h"
using namespace std;

int main()
{
    ControleDeGastos empresa;

    int tipo;
    double valor;
    int id=0;
    cout << "Cadastro 1 de gasto:" << endl;
    cout<<"\tDigite o valor da despesa: ";
    cin>>valor;
    cout<<"\n\tDigite o tipo da despesa [1-Alimentacao, 2-Aluguel]: ";
    cin>>tipo;

    empresa.setDespesa(valor,id,tipo);
    id++;

    cout << "Cadastro 2 de gasto:" << endl;
    cout<<"\tDigite o valor da despesa: ";
    cin>>valor;
    cout<<"\n\tDigite o tipo da despesa [1-Alimentacao, 2-Aluguel]: ";
    cin>>tipo;

    empresa.setDespesa(valor,id,tipo);

    cout<<"Total das Despesas :"<<empresa.calculaTotalDeDespesas()<<endl;

    int existencia;

    existencia=empresa.existeDespesaDoTipo(1);

    if(existencia==1){cout<<"Existe despesas do tipo Alimentacao!"<<endl;}
    else{cout<<"Nao existe despesas do tipo Alimentacao!"<<endl;}

    existencia=empresa.existeDespesaDoTipo(2);

    if(existencia==1){cout<<"Existe despesas do tipo Aluguel!"<<endl;}
    else{cout<<"Nao existe despesas do tipo Aluguel!"<<endl;}

    return 0;
}
