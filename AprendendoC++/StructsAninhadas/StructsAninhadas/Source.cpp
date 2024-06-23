#include <iostream>
#include <cstring>

struct Data
{
	int Dia;
	int Mes;
	int Ano;
};

struct Endereco
{
	std::string Rua;
	std::string Cidade;
	std::string Estado;
	std::string Pais;

};

struct  Pessoa
{
	std::string Nome;
	Data DtNascimento;
	Endereco Endereco;

};


int main()
{

	Pessoa Pessoa01[2];

	for (int i = 0; i < 2; i++)
	{
		Pessoa01[i].Nome = "Udemy";
		Pessoa01[i].DtNascimento.Dia = 01+i;
		Pessoa01[i].DtNascimento.Mes = 02+i;
		Pessoa01[i].DtNascimento.Ano = 2009+1;
		Pessoa01[i].Endereco.Rua = "A ";
		Pessoa01[i].Endereco.Cidade = "Sao Franciso ";
		Pessoa01[i].Endereco.Estado = "California ";
		Pessoa01[i].Endereco.Pais = "Estados Unidos ";
	}
	

	for (int i = 0; i < 2; i++)
	{
		std::cout << "Nome: " << Pessoa01[i].Nome << "\n";
		std::cout << "Data de Nascimento: " << Pessoa01[i].DtNascimento.Dia << "\\" << Pessoa01[i].DtNascimento.Mes << "\\" << Pessoa01[i].DtNascimento.Ano << "\n";
		std::cout << "Endereco: " << "Rua: " << Pessoa01[i].Endereco.Rua << Pessoa01[i].Endereco.Cidade << Pessoa01[i].Endereco.Estado << Pessoa01[i].Endereco.Pais << "\n";
	}

	system("pause");
	return 0;
}