#pragma once
#include "Pessoa.h"

class Aluno : public Pessoa
{
public:
	
	Aluno(){};
	Aluno(std::string NovoNome, int NovoCPF, int NovaMAtricula, std::string NovoCurso) :
		Pessoa(NovoNome, NovoCPF, NovaMAtricula), Curso(NovoCurso) {}

	void RealizarProva();
	void SetCurso(std::string NovoCurso);
	std::string GetCurso();
	void MostrarDados();

private:
	std::string Curso;
};

