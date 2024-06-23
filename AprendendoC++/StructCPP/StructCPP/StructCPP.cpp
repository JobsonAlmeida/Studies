#include <iostream>

class Data
{
public:
	static int contador;
	int id;
	int Dia;
	int Mes;
	int Ano;
	
	Data() { 
		id = contador++;
		std::cout << "\nConstrutor Data(" << id << ") executado" << "\n";
		std::cout << "contador: " << contador << "\n";
	}
	~Data() {
		std::cout << "\nDestrutor ~Data(" << id << ") executado" << "\n";
		std::cout << "contador: " << contador << "\n";
	}

};

static int MinhaEstaticaGlobal = 2;
int main()
{
	static int MinhaEstatica1 = 1; //ok

	{
		Data Agenda1;
		static int MinhaEstatica2 = 2;
		std::cout << "MinhaEstatica1: " << MinhaEstatica1 << "\n";
		//Escopo 1
		//id = 1
		//contador = 2

		{

			Data Agenda2;
			Data* Agenda3 = new Data;
		}

		Data Agenda4;		 
	}

	std::cout << "MinhaEstatica1: " << MinhaEstatica1 << "\n";
	std::cout << "MinhaEstatica2Global: " << MinhaEstaticaGlobal << "\n";
	
	system("pause");
	return 0;
}