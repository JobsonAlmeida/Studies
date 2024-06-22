#include "Conta.h"
#include <iostream>

int main()
{
	Conta ContaCliente01("Itau", 2222, 555, "Marcos", 100000) ;
	Conta ContaCliente02;


	std::cout << "Endereco Memoria Objeto ContaCliente01: " << &ContaCliente01 << "\n";
	ContaCliente01.GetEnderecoThis();
	std::cout << "Endereco Memoria Objeto ContaCliente02: " << &ContaCliente02 << "\n";
	ContaCliente02.GetEnderecoThis();


	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(999);
	ContaCliente01.SetTitular("Fulano");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco do Brasil"); 
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Beltrano");

	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);


	system("pause");
	return 0;
}