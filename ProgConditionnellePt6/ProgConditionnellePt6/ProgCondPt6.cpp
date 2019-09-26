#define _USE_MATH_DEFINES

#include <iostream>
#include <math.h>
#include <cmath>


// exercice 2.10



float a;
float b;
float c;
float x1;
float x2;

float solutionA() { // si a est égal à zéro

	a = -c / b;
	return a;
}

float solutionX1() { // première solution x1

	x1 = (-b + sqrt(b * 2 - 4 * a * c)) / 2 * a;
	return x1;
}

float solutionX2() { // deuxième solution x2

	x2 = (-b - sqrt(b * 2 - 4 * a * c)) / 2 * a;
	return x2;

}


int main() {

	std::cout << "Donnez la valeur de a ";
	std::cin >> a;
	std::cout << "Donnez la valeur de b ";
	std::cin >> b;
	std::cout << "Donnez la valeur de c ";
	std::cin >> c;

	if (a == 0 && b == 0) {

		std::cout << "Pas de solution ";

	}

	else if (a == 0) {

		std::cout << "La solution est " << solutionA() << " \n";

	}

	else if (b * 2 - 4 * a * c < 0) {

		std::cout << "Pas de solution reel";

	}

	else if (b * 2 - 4 * a * c > 0) {

		std::cout << "Deux solutions possible " << solutionX1() << " et " << solutionX2() << " \n";
	}

	system("pause");
	return EXIT_SUCCESS;

}