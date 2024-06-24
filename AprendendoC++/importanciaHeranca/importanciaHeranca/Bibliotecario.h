#pragma once
#include "Pessoa.h"
class Bibliotecario : public Pessoa
{

public:

	Bibliotecario() {};
	Bibliotecario(std::string NovoNome, int NovoCPF, int NovaMAtricula) :
		Pessoa(NovoNome, NovoCPF, NovaMAtricula){}
	void CadastrarLivros();

	void MostrarDados()
	{
		Pessoa::MostrarDados();
	}
};

