#pragma once
#include <string>
#include <exception>


class FuncionarioNaoExisteException : public std::exception
{
public:
    FuncionarioNaoExisteException ()throw();
    std::string getMensagem();

private:
    std::string mensagem; 
};
