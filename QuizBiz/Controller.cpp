#include "Controller.h"

int main() {

	Controller controller;
	controller.boucleQuiz();

	return 0;
}

Controller::Controller() 
{
	questionListIndex = std::stoi(vue.askWhichQuiz());
	questionListe = model.getQuestions(questionListIndex);
}

void Controller::boucleQuiz() {
	for (int index{}; index < questionListe.size(); ++index) 
		processQuestion(index);
}

void Controller::processQuestion(int index) {
	vue.affichageQuestion((*questionListe.at(index)).mQuestion);
	bool valideAnswer = false;
	do
	{
		questionListe.at(index)->validator->setUserAnswer(vue.userInput());
		//questionListe.at(index)->validator->setReponse(questionListe.at(index).)
		// Question.h mReponse ???
		valideAnswer = questionListe.at(index)->validator->verifier();
		std::cout << "\n" << valideAnswer;
	} while (!valideAnswer);
}

/*
void Controller::validation(Question *question) {
	QuestionVraisFaux *q{dynamic_cast<QuestionVraisFaux*>(question)};
	if (q) {
		//...
	}
}
*/