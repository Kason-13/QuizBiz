#include "View.h"

std::string Vue::userInput() {
	std::string userInput="";
	std::getline(std::cin, userInput);
	return userInput;
}

void Vue::montrerResultat(int bonneRep, int TotalQuestion, int points) {
	std::cout << "Vous avez eu " << bonneRep << " bonne reponse sur les " << TotalQuestion << " questions.\n";
	std::cout << "cela vous donne une note de " << ((((float)bonneRep) / ((float)TotalQuestion)) * 100) << "%\n";
	std::cout << "Vous avez un total de " << points << " points pour ce quiz!";
}

void Vue::affichageQuestion(std::string question) {
	std::cout << "\n\n" << "question: " << question <<"\n\n";
}

void Vue::affichageMessage(std::string message) {
	std::cout << message;
}

void Vue::affichageChoixDeQuiz(std::vector<std::string>vecteurTitre) {
	std::cout << "Choissisez le quiz que vous voulez repondre!\n";
	for (size_t index{}; index < vecteurTitre.size(); ++index) {
		std::cout << index+1 << ": " << vecteurTitre.at(index) <<"\n";
	}
}

std::string Vue::askWhichQuiz() {
	std::cout << "quel quiz voulez vous essayer: ";
	return userInput();
}