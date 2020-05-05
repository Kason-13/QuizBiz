#include "Validator.h"

int Validator::verifier() {
	validated = validate();
	verified = verifierReponse();
	if (!validated)
		return 0;
	else if (!verified)
		return 2;
	else if(validated && verified)
		return 1;
}

void Validator::setUserAnswer(std::string userAnswer) {
	mUserAnswer = userAnswer;
}