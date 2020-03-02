#pragma once
#include <exception>
#include <string>

class OrcamentoEstouradoExcepction : public std::exception
{
public:
     OrcamentoEstouradoExcepction (){}
    const char *what() const noexcept{
        return "Folha de Pagamento Extrapola Limite do Orçamento.";
    }
};