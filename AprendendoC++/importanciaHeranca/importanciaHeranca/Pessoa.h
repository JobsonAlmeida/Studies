#pragma once
#include <iostream>


class Pessoa
{

public:

	Pessoa(): Nome(""), CPF(0), Matricula(0) { }
	Pessoa(std::string NovoNome, int NovoCPF, int NovaMatricula) : Nome(NovoNome), CPF(NovoCPF), Matricula(NovaMatricula) {}
	void AcessarSistema();

	void SetNome(std::string Nome);
	std::string GetNome();
	void SetCPF(int CPF);
	int GetCPF();
	void SetMatricula(int NovaMatricula);
	int GetMatricula();

	void MostrarDados();

private:
	std::string Nome;
	int CPF;
	int Matricula;

};

