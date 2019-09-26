#include <iostream>
#include <math.h>
#include <stdio.h>

// exercice 2.1

int main() {
	
	float nombre;
	float racine;

	std::cout << "Entrer un nombre a virgule ";
	std::cin >> nombre;

	if (nombre >= 0)
	{

		std::cout << "La racine carr\x82 de " << nombre << " est " << sqrt(nombre) << "\n";

	}

	else
	{

		std::cout << "Erreur";

	}

}