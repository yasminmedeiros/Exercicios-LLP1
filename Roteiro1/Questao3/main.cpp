#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

int main()
{
    Empregado empregado1, empregado2;
    string nome, sobrenome;
    double salario;

    cout<<"Cadastro 1: "<<endl;
    cout<<"\tDigite o nome do primeiro empregado: ";
    cin>>nome;
    cout<<"\n\tDigite o sobrenome do primeiro empregado: ";
    cin>>sobrenome;
    cout<<"\n\tDigite o salario mensal do primeiro empregado: ";
    cin>>salario;
    empregado1.setNome(nome);
    empregado1.setSobrenome(sobrenome);
    empregado1.setSalario(salario);

    cout<<"Cadastro 2: "<<endl;
    cout<<"\tDigite o nome do segundo empregado: ";
    cin>>nome;
    cout<<"\n\tDigite o sobrenome do segundo empregado: ";
    cin>>sobrenome;
    cout<<"\n\tDigite o salario mensal do segundo empregado: ";
    cin>>salario;

    empregado2.setNome(nome);
    empregado2.setSobrenome(sobrenome);
    empregado2.setSalario(salario);


    salario=empregado1.getSalario();
    cout<<"\nO salario anual do primeiro empregado é: "<<salario*12<<endl;
    salario=salario*1.10;
    cout<<"\nO salario anual do primeiro empregado é com aumento de 10%: "<<salario<<endl;
    cout<<"\nO  novo salario anual do primeiro empregado é: "<<salario*12<<endl;
    salario=empregado2.getSalario();
    cout<<"\nO salario anual do segundo empregado é: "<<salario*12<<endl;
    salario=salario*1.10;
    cout<<"\nO salario anual do segundo empregado é com aumento de 10%: "<<salario<<endl;
    cout<<"\nO  novo salario anual do segundo empregado é: "<<salario*12<<endl;

    return 0;

}
