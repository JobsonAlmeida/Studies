#pragma once
#include "Pessoa.h"
#include "Aluno.h"

class Professor : public Pessoa
{ 
public:
	Professor() {};
	Professor(std::string NovoNome, int NovoCPF, int NovaMAtricula, std::string NovoDepartamento):
		Pessoa(NovoNome, NovoCPF, NovaMAtricula),
		Departamento(NovoDepartamento){ }
	void EfetuarChamada();
	void EntregarPauta();

	std::string GetDepartamento();
	void SetDepartamento(std::string NovoDepartamento);

	void MostrarDados();



private:
	std::string Departamento;
};


