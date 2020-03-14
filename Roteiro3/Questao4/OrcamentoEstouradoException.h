#pragma once

#include <string>
#include <exception>

class OrcamentoEstouradoException : public std::exception
{
public:
    OrcamentoEstouradoException () throw();
    std::string getMensagem();

private:
    std::string mensagem; 
     
};