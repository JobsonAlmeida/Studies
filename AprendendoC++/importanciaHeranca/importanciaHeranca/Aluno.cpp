#include "Aluno.h"

void Aluno::RealizarProva()
{
	std::cout << "Prova Realizada\n";
}

void Aluno::SetCurso(std::string NovoCurso)
{
	Curso = NovoCurso;
}

std::string Aluno::GetCurso()
{
	return Curso;
}

void Aluno::MostrarDados()
{
	Pessoa::MostrarDados();
	std::cout << "Curso: " << GetCurso() << "\n";
}
