
#include <iostream>
#include <ctime>

int main()
{


	time_t Tempo = time(NULL);
	std::cout << ctime(&Tempo);

	time_t HoraAtual = time(NULL);
	tm* MinhaHora = localtime(&HoraAtual);

	std::cout << "\nHora: " << 1 + MinhaHora->tm_hour << ":" << 1 + MinhaHora->tm_min << ":" << 1 + MinhaHora->tm_sec << "\n";
	std::cout << "\Dia: " << MinhaHora->tm_mday << "\n";
	std::cout << "\Mes: " << MinhaHora->tm_mon << "\n";
	std::cout << "\Ano: " << MinhaHora->tm_year << "\n";

	system("pause");
	return 0;
}