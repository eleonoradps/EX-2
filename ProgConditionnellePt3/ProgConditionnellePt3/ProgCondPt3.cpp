#include <iostream>

// exercice 2.2

int main() {
	int entier;
		std::cout << "Tape un entier";
		std::cin >> entier;

		if ((entier >= 56) && (entier <= 78))
		{
			std::cout << "GAGNE";
		}

		else
		{
			std::cout << "PERDU";
		}


}