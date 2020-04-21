#include "Controller.h"

int main() {

	Controller controller;
	controller.boucleQuiz();
	return 0;
}

Controller::Controller() 
{
	questionListIndex = std::stoi(vue.userInput());
	questionListe = model.getQuestions(questionListIndex);
}

void Controller::boucleQuiz() {
	for (int index{}; index < questionListe.size(); ++index) 
	{
		vue.affichageQuestion(questionListe.at(index).question);
		vue.userInput();
	}
}