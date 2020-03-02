#pragma once
#include "Funcionario.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"


class SistemaGerenciaFolha
{
private:
    Funcionario *funcionarios[100];
    int id;
public:
    SistemaGerenciaFolha();
    void setFuncionarios();
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario(std::string nome);
};

