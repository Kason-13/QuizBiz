#include "Validator.h"

// retourne 0 ou 2 selon ce qui n'est pas bon ou conforme, retourne 1 si c'est la bonne reponse
int Validator::verifier() {
	validated = validate();
	if(validated)
		verified = verifierReponse();
	if (!validated)
		return 0;
	else if (!verified)
		return 2;
	else if(validated && verified)
		return 1;
	return 0;
}

void Validator::setUserAnswer(std::string userAnswer) {
	mUserAnswer = userAnswer;
}