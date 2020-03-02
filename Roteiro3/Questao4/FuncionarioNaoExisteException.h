#pragma once
#include <exception>
#include <string>

class FuncionarioNaoExisteExcepction : public std::exception
{
public:
    const char *what() const noexcept{
        return "Não Existe Nenhum Funcionario Com Esse Nome.";
    }
};