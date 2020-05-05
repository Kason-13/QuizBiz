#pragma once
#include <iostream>
#include <string>
#include <vector>
class Vue {

public:
	int choixDeQuestionaire = 0;
	void affichageTitre(std::string titre);
	std::string userInput();
	void affichageQuestion(std::string question);
	std::string askWhichQuiz();
	void montrerResultat(int bonneRep,int TotalQuestion,int points);
	void affichageMessage(std::string message);

	void affichageChoixDeQuiz(std::vector<std::string>vecteurTitre);
private:
	// pour formater l'affichage du titre et des questions dans la console
	int consoleQuestionFormatIndex = 0;
	int consoleTitleFormatIndex = 0;
};