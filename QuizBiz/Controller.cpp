#include "Controller.h"

int main() {

	Controller controller;
	controller.boucleQuiz();
	controller.playAgain();
	return 0;
}

Controller::Controller() 
{
	vue.affichageMessage("BIENVENU AU QUIZ BIZ CVM!\n");
	quizSetup();
}

void Controller::quizSetup() {
	vue.affichageChoixDeQuiz(std::vector<std::string>{"quiz bizzare 1", "quiz bix MIX INFO"});
	questionListIndex = std::stoi(vue.askWhichQuiz());
	questionListe = model.getQuestions(questionListIndex - 1); // pour offset le choix de quiz par index
	userResult.setNbrQuestion(questionListe.size());
	userResult.resetBonneRep();
	userResult.resetScore();
	system("cls");
}

void Controller::playAgain() {
	vue.affichageMessage("Voulez-vous faire un autre quiz? 'o' ou 'O' pour oui! Autre touche pour non! \n");
	std::string userInput = vue.userInput();
	char charUserInput = toupper(userInput.at(0));
	while(charUserInput == 'O') {
		quizSetup();
		boucleQuiz();
		vue.affichageMessage("Voulez-vous faire un autre quiz? 'o' ou 'O' pour oui! Autre touche pour non! \n");
		userInput = vue.userInput();
		charUserInput = toupper(userInput.at(0));
	}
}

void Controller::boucleQuiz() {
	for (size_t index{}; index < questionListe.size(); ++index) 
		processQuestion(index);
	vue.montrerResultat(userResult.getBonneRep(),userResult.getNbrQuestion(),userResult.getScore());
}

void Controller::processQuestion(int index) {
	vue.affichageQuestion((*questionListe.at(index)).getQuestion());
	int valideAnswer = false;
	questionListe.at(index)->setReponse();
	do
	{
		questionListe.at(index)->affichageInstruction();
		questionListe.at(index)->getValidator()->setUserAnswer(vue.userInput());
		valideAnswer = questionListe.at(index)->getValidator()->verifier();
		if (valideAnswer == 0)
			std::cout << "Votre reponse ne convient pas au contrainte";
		if (valideAnswer == 1){
			userResult.incrementBonneRep();
			userResult.addScore(questionListe.at(index)->getPoint());
		}
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