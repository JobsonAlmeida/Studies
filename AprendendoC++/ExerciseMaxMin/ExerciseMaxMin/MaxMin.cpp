#include <iostream>

float Sort(float Array[20]);

int main()
{
	int NumberElements = 0;
	float Elements[20]{0};
	std::cout << "Type the number of elements: ";
	std::cin >> NumberElements;

	for (int i = 0; i<NumberElements; i++)
	{
		std::cout << "Type the element " << i+1 << ": ";
		std::cin >> Elements[i];
	}

	std::cout << "The maximum typed is: " << Sort(Elements);

	return 0;
}

float Sort(float Array[20])
{
	float Maximum = 0.0f;

	for (int i = 0; i <= 20; i++)
	{
		if (Array[i] > Maximum)
		{
			Maximum = Array[i];
		}

	}

	return Maximum;
}
