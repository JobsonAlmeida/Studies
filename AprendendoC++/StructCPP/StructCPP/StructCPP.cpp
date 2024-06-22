#include <iostream>

class Data
{

public:
	int Dia;
	int Mes;
	int Ano;
	Data(): Dia(22), Mes(07), Ano(2013){} //this is just a way to type the constructor and does this.Dia = Dia this.Mes = Mes this.Ano = ano
};



int main()
{
	Data Agenda;
	Agenda.Dia = 22;
	Agenda.Mes = 07;
	Agenda.Ano = 2013;
	std::cout << "Dia: " << Agenda.Dia << " Mes: " << Agenda.Mes << " Ano: " << Agenda.Ano << "\n";
	system("pause");

	return 0;
}