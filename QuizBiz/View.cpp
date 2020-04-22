#include "View.h"

void Vue::affichageTitre(std::string titre) {
	// to format it in the top middle of the screen

	std::cout << "titre";
}

std::string Vue::userInput() {
	std::string userInput="";
	std::getline(std::cin, userInput);
	return userInput;
}


void Vue::affichageQuestion(std::string question) {
	std::cout << "\n\n" << "question: " << question <<"\n\n";
}

std::string Vue::askWhichQuiz() {
	std::cout << "quel quiz voulez vous essayer: ";
	return userInput();
}