#pragma once
#include "Model.h"
#include "View.h"
#include "Question.h"
#include <string>

class Controller{
public:
	Controller();
	~Controller() = default;
	void boucleQuiz();



private:
	bool quitter{ false };
	Model model;
	Vue vue;
	int questionListIndex;
	std::vector<Question> questionListe;
};