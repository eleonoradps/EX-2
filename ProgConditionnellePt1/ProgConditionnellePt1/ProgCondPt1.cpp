#include <iostream>
#include <stdio.h>
#include <stdlib.h>

// exercice 2.0



int main() {
	int entier;
	int pair;
	int impair;
	std::cout << "Peux-tu entrer un entier?";
	std::cin >> entier;

	if (entier % 2 == 0) {

		std::cout << entier << " est pair";
	} 
	else {

		std::cout << entier << " est impair";
	}
		


}