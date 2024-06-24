#include "Professor.h"


void Professor::EfetuarChamada()
{
	std::cout << "Pauta Entregue";
}

void Professor::EntregarPauta()
{
	std::cout << "Chamada Efetuada\n";
}

std::string Professor::GetDepartamento()
{
	return Departamento;
}

void Professor::SetDepartamento(std::string NovoDepartamento)
{
	Departamento = NovoDepartamento;
}

void Professor::MostrarDados()
{
	Pessoa::MostrarDados();
	std::cout << "Departamento: " << GetDepartamento() << "\n";
}
