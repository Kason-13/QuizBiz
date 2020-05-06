#pragma once
#include <iostream>
#include <string>
#include <vector>
class Vue {

public:
	int choixDeQuestionaire = 0;
	std::string userInput(); // permet de prendre le input du user
	// pour afficher la question
	void affichageQuestion(std::string question);
	// pour demander quel quiz on veut jouer
	std::string askWhichQuiz();
	// pour montrer le resultat de fin
	void montrerResultat(int bonneRep,int TotalQuestion,int points);
	// pour afficher tout autre message
	void affichageMessage(std::string message);
	// pour afficher toute les quiz possible
	void affichageChoixDeQuiz(std::vector<std::string>vecteurTitre);
private:
	// pour formater l'affichage du titre et des questions dans la console
	int consoleQuestionFormatIndex = 0;
	int consoleTitleFormatIndex = 0;
};