#include "Pessoa.h"


void Pessoa::AcessarSistema()
{
	std::cout << "***** Acesso ao sistema concedido *****";
}

std::string Pessoa::GetNome()
{
	return Nome;
}

void Pessoa::SetCPF(int CPF)
{
	CPF = CPF;
}

void Pessoa::SetNome(std::string Nome)
{
	this->Nome = Nome;
}

int Pessoa::GetCPF()
{
	return CPF;
}

int Pessoa::GetMatricula()
{
	return Matricula;
}

void Pessoa::MostrarDados()
{
	std::cout << "**** Dados ****\n";
	std::cout << "Nome: " << GetNome() << "\n";
	std::cout << "CPF: " << GetCPF() << "\n";
	std::cout << "Matricula: " << GetMatricula() << "\n";

}

void Pessoa::SetMatricula(int NovaMatricula)
{
	Matricula = NovaMatricula;
}
