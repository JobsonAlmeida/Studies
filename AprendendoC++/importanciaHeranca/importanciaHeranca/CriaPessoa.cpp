#include <iostream>
#include "Professor.h"
#include "Aluno.h"
#include "Bibliotecario.h"


int main()
{



	Professor Marcos("Pacheco", 23010214517, 4114755, "Udemy");
	Aluno Luke("Skywalker", 52147458521, 78541547, "Jedi");
	
	Bibliotecario ObiWan("Kneobi", 111, 2222);

	Marcos.MostrarDados();
	Luke.MostrarDados();
	ObiWan.MostrarDados();


	Aluno Roberto;
	Roberto.SetNome("Baby");
	Roberto.MostrarDados();

	system("pause");
	return 0;
}