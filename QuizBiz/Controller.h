#pragma once
#include "Model.h"
#include "View.h"
#include "Question.h"
#include <string>
#include "Resume.h"
#include <vector>
#include <cstdlib>

class Controller{
public:
	Controller();
	~Controller() = default;
	// boucle de question principale
	void boucleQuiz();
	// pour process la question present et verifie la reponse du user
	void processQuestion(int index);
	//pour demander s'il veut rejouer & verification
	void playAgain();
	//pour setup la partie
	void quizSetup();

private:
	bool quitter{ false };
	Model model;
	Vue vue;
	Resume userResult;
	std::vector<std::string> quizTitles{ "quiz bizzare 1", "quiz bix MIX INFO" };
	std::vector<Question*> questionListe;
	int questionListIndex;
};