//#include <iostream>
#include <cstdlib>
//#include <string> 

float CalculaMedia(float Notas[])
{
	return (Notas[0] + Notas[1] + Notas[2] + Notas[3] + Notas[4]) / 5;
}

int main()
{
	//setlocale(LC_ALL, "");
	/*float Notas[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
	std::string NomeAluno;

	std::cout << "Digite o nome do aluno: ";
	std::cin >> NomeAluno;

	for (int i = 0; i <= 4; i++)
	{
		std::cout << "Digite a nota " << (i+1) << ": ";
		std::cin >> Notas[i];
		system("cls");
	}

	std::cout << "A média é: " << CalculaMedia(Notas) << std::endl;

	*/
	system("pause");  
	return 0;
}


