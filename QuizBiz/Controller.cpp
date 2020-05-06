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
	vue.affichageChoixDeQuiz(quizTitles);
	bool validated = false;
	// pour verifier le choix de quiz
	do
	{
		std::string userChoice = vue.askWhichQuiz();
		if (std::isdigit(userChoice[0])){
			questionListIndex = std::stoi(userChoice);
			if (questionListIndex <= model.getDBSize())
				validated = true;
			else
				validated = false;
		}
		else {
			validated = false;
			vue.affichageMessage("l'option que vous avez choisi n'est pas valide! veuillez re-essayer\n");
		}
	} while(!validated);
	system("cls");
	vue.affichageMessage("\nBienvenue au " + quizTitles.at(questionListIndex - 1) + "!");
	questionListe = model.getQuestions(questionListIndex - 1); // pour offset le choix de quiz par index
	userResult.setNbrQuestion(questionListe.size());
	userResult.resetBonneRep();
	userResult.resetScore();
}

void Controller::playAgain() {
	vue.affichageMessage("\nVoulez-vous faire un autre quiz? 'o' ou 'O' pour oui! Autre touche pour non! \n");
	std::string userInput = vue.userInput();
	char charUserInput = toupper(userInput.at(0));
	// tant qu'on veut rejouer
	while(charUserInput == 'O') {
		system("cls");
		quizSetup();
		boucleQuiz();
		vue.affichageMessage("\nVoulez-vous faire un autre quiz? 'o' ou 'O' pour oui! Autre touche pour non! \n");
		userInput = vue.userInput();
		charUserInput = toupper(userInput.at(0));
	}
}

void Controller::boucleQuiz() {
	for (size_t index{}; index < questionListe.size(); ++index) 
		processQuestion(index);

	// affichage resultat
	vue.montrerResultat(userResult.getBonneRep(),userResult.getNbrQuestion(),userResult.getScore());
}

// pour chaque question
void Controller::processQuestion(int index) {
	vue.affichageQuestion((*questionListe.at(index)).getQuestion());
	int valideAnswer = false;
	questionListe.at(index)->setReponse();
	do
	{
		questionListe.at(index)->affichageInstruction(); // afficher instruction
		questionListe.at(index)->getValidator()->setUserAnswer(vue.userInput()); // get input du user
		// verifie si valide et si bonne reponse
		valideAnswer = questionListe.at(index)->getValidator()->verifier();
		if (valideAnswer == 0)
			std::cout << "Votre reponse ne convient pas au contrainte";
		if (valideAnswer == 1){
			userResult.incrementBonneRep();
			userResult.addScore(questionListe.at(index)->getPoint());
		}
	} while (!valideAnswer); // tant que input invalide
}



/*
void Controller::validation(Question *question) {
	QuestionVraisFaux *q{dynamic_cast<QuestionVraisFaux*>(question)};
	if (q) {
		//...
	}
}
*/