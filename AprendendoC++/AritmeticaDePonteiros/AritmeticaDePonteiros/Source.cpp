//#include <iostream>
//
//int main()
//{
//	setlocale(LC_ALL, "");
//	int Vetor[] = { 1, 23, -78, 900, 234 };
//	int* ptr;
//	ptr = Vetor;
//	std::cout << "ptr: " << ptr << "\n";
//	std::cout << "Vetor: " << *(Vetor+1)<< "\n";
//	std::cout << "&Vetor[0]: " << &Vetor[0] << "\n";
//
//
//
//
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << "Vetor[" << i << "] Endereco: " << &Vetor[i] << "; Valor: " << Vetor[i] << "\n";
//	}
//
//	std::cout << "\nEndereços com Aritmetica de ponteiros\n";
//	std::cout << "Valor contido em ptr: " << ptr << "\n";
//	std::cout << "(ptr + 0) END: " << (ptr + 0) << " Valor: " << *(ptr + 0) << "\n";
//	std::cout << "(ptr + 1) END: " << (ptr + 1) << " Valor: " << *(ptr + 1) << "\n";
//	std::cout << "(ptr + 2) END: " << (ptr + 2) << " Valor: " << *(ptr + 2) << "\n";
//	std::cout << "(ptr + 3) END: " << (ptr + 3) << " Valor: " << *(ptr + 3) << "\n";
//	std::cout << "(ptr + 4) END: " << (ptr + 4) << " Valor: " << *(ptr + 4) << "\n";
//	std::cout << "Valor contido em ptr: " << ptr << "\n";
//	ptr++;
//	std::cout << "Valor contido em ptr depois de ptr++: " << ptr << "\n";
//	ptr = &Vetor[3];
//	ptr--;
//	std::cout << "Valor do apontado por ptr: " << *ptr << "\n";
//
//	std::cout << "\n";
//	ptr = Vetor; 
//
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << "Vetor[" << i << "] = " << *(ptr + i) << "\n";
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		std::cout << "Vetor[" << i << "] = " << ptr[i] << "\n";
//	}
//
//
//
//
//
//
//	system("pause");
//	return 0;
//
//}