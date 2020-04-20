#pragma once
#include <iostream>
#include <string>
class Vue {

public:
	int choixDeQuestionaire = 0;
	void affichageTitre(std::string titre);
	std::string userInput();
	void affichageQuestion(std::string question);
private:
	// pour formater l'affichage du titre et des questions dans la console
	int consoleQuestionFormatIndex = 0;
	int consoleTitleFormatIndex = 0;
};