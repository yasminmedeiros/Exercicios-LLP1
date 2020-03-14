#include "OrcamentoEstouradoException.h"

OrcamentoEstouradoException::OrcamentoEstouradoException () throw(){
    this->mensagem="Erro:Orcamento Estourado";
}
std::string OrcamentoEstouradoException::getMensagem(){return this->mensagem;}