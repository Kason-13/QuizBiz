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
	int questionListIndex;
	std::vector<Question> questionListe;
};