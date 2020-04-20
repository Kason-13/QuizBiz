#include "Controller.h"

int main() {


	return 0;
}

Controller::Controller() 
{
	Model model;
	Vue vue;
	questionListIndex = std::stoi(vue.userInput());
	questionListe = model.getQuestions(questionListIndex);
}

void Controller::boucleQuiz() {
	for (int index{}; index < questionListe.size(); ++index) 
	{

	}
}