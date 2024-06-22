#include <iostream>


void Funcao01();
void Funcao02();
void Funcao03();
void Funcao04();

int VarGlobal{ 10 };

int main()
{
	int VarMain{ 00 };
	
	Funcao01();
	system("pause");

	return 0;
}

void Funcao01()
{
	int Var01{ 01 };
	static int VarEstatica{ 20 };
	std::cout << "Chamando Funcao01 \n";
	std::cout << "Endereco Var01: " << &Var01 << "\n";
	VarEstatica++;
	std::cout << "Valor VarEstatica" << VarEstatica <<std::endl;

	Funcao02();
	
}

void Funcao02()
{
	int Var02{ 02 };
	std::cout << "Chamando Funcao02 \n";
	std::cout << "Endereco Var02: " << &Var02;
	Funcao03();
	
}

void Funcao03()
{
	int Var03{ 03 };
	std::cout << "Chamando Funcao03 \n";
	std::cout << "Endereco Var03: " << &Var03;
	Funcao04();
}

void Funcao04()
{
	int Var04{ 04 };
	std::cout << "Chamando Funcao04 \n";
	std::cout << "Endereco Var04: " << &Var04;
}

