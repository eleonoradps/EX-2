#include <iostream>

// exercice 2.4

float a;
float b;
int choice;

int somme() { // calcul de l'addition

	int resultat = a + b;
	return resultat;
}

int difference() { // calcul de la soustraction

	int resultat = a - b;
	return resultat;
}

int produit() { // calcul de la multiplication

	int resultat = a * b;
	return resultat;
}

int quotient() { // calcul de la division

	int resultat = a / b;
	return resultat;
}



int main() {

	std::cout << "Choisissez une op\x82ration \n" ;
	std::cout << "Additionner = 1 \n ";
	std::cout << "Soustraire = 2 \n ";
	std::cout << "Multiplier = 3 \n ";
	std::cout << "Diviser = 4 \n ";
	std::cin >> choice;

	std::cout << "Veuillez choisir un entier ";
	std::cin >> a;
	std::cout << "Veuillez choisir un deuxi\x8Ame entier ";
	std::cin >> b;

	switch (choice) {

	case 1: {
		std::cout << "Votre r\x82sultat est " << somme() << " \n";
		break;
	}

	case 2: {
		std::cout << "Votre r\x82sultat est " << difference() << " \n";
		break;
	}

	case 3: {
		std::cout << "Votre r\x82sultat est " << produit() << " \n";
		break;
	}

	case 4: {
		std::cout << "Votre r\x82sultat est " << quotient() << " \n";
		break;
	}

	}

	system("pause");
	return EXIT_SUCCESS;
}
	

	