#include <iostream>


class Casa {


	private:
		int NumQuartos{ 4 };
		float Tamanho{ 90.0f };
		bool bTemSuite{ false };


	public:
	void ABC()
	{
		std::cout << "Está é a função ABC";
	};
	void MostrarTamanho();
	int ObterNumeroDeQuartos();
	bool TemSuite();
	void SetNumQuartos(int Num);



};
int main()
{

	Casa CasaDePraia;
	std::cout << "Num Quartos: " << CasaDePraia.ObterNumeroDeQuartos() << "\n";
	std::cout << "Tem Suite? : "; 
	CasaDePraia.TemSuite() ? (std::cout << "Sim") : (std::cout << "Nao") << "\n";

	CasaDePraia.MostrarTamanho();
	CasaDePraia.SetNumQuartos(1000);
	std::cout << "\n";
	
	return 0;
}

void Casa::MostrarTamanho()
{
	std::cout << "Tamanho: " << Tamanho << "\n";
}

int Casa::ObterNumeroDeQuartos()
{
	return 0;
}

bool Casa::TemSuite()
{
	return bTemSuite;
}

void Casa::SetNumQuartos(int Num)
{
	if (Num <= 6 && (Num >= 0))
	{
		NumQuartos = Num;
	}
	else
	{
		std::cout << "Numero de Quartos Inválidos!";
	}
}


