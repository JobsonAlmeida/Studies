#include "Conta.h"

#include <iostream>
#include <string>

Conta::Conta()
{
	Banco = "";
	Agencia = 0;
	NumConta = 0;
	Titular = "";
	Saldo = 0.0;
}

Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo)
{
	this->Banco = Banco;
	this->Agencia = Agencia;
	this->NumConta = NumConta;
	this->Titular = Titular;
	this->Saldo = Saldo;
}

bool Conta::Sacar(double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "Saldo Insuficiente!\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo() << "\n";
		return false;
	}
	else
	{
		Saldo = Saldo - Valor;
		std::cout << "Seu saldo atual: R$" << ConsultarSaldo() << "\n";
		return true;
	}
}

void Conta::Depositar(double Valor)
{
	Saldo += Valor; 
	std::cout << "Deposito de R$" << Valor << " efetuado com sucesso! \n";
}


void Conta::Transferir(Conta &Destino, double Valor)
{
	if (Saldo < Valor)
	{
		std::cout << "Saldo Insuficiente\n";
	}
	else
	{
		Destino.Depositar(Valor);
		Saldo = Saldo - Valor;
		std::cout << "\n***Dados***\n";
		std::cout << "Titular: " << Destino.GetTitular() << "\n";
		std::cout << "Banco: " << Destino.GetBanco() << "\n";
		std::cout << "Agencia: " << Destino.GetAgencia() << "\n";
		std::cout << "Conta: " << Destino.GetNumConta() << "\n";
		std::cout << "Transferência Realizada com Sucesso!" << "\n";
		std::cout << "Seu Saldo Atual: R$" << ConsultarSaldo()<<"\n";
	}

}

double Conta::ConsultarSaldo()
{
	return Saldo;
}

std::string Conta::GetBanco()
{
	return Banco;
}

int Conta::GetAgencia()
{
	return Agencia;
}

std::string Conta::GetTitular()
{
	return Titular;
}

void Conta::SetBanco(std::string Banco)
{
	this->Banco = Banco;  
}

void Conta::SetAgencia(int Agencia)
{
	this->Agencia = Agencia;
}

void Conta::SetNumConta(int NumConta)
{
	this->NumConta = NumConta;
}

void Conta::SetTitular(std::string Titular)
{
	this->Titular = Titular;
}

int  Conta::GetNumConta()
{
	return this->NumConta;
}



void Conta::GetEnderecoThis()
{
	std::cout << "\nthis contem dentro o endereco: " << this << "\n"; 
}
