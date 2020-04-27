#pragma once
#include "Model.h"
#include "View.h"
#include "Question.h"
#include <string>
#include "Resume.h"

class Controller{
public:
	Controller();
	~Controller() = default;
	void boucleQuiz();
	void processQuestion(int index);

private:
	bool quitter{ false };
	Model model;
	Vue vue;
	Resume userResult;
	std::vector<Question*> questionListe;
	int questionListIndex;
};