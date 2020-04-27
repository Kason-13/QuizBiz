#include "Validator.h"

bool Validator::verifier() {
	validated = validate();
	verified = verifierReponse();
	if (validated&&verified)
		return true;
	return false;
}

void Validator::setUserAnswer(std::string userAnswer) {
	mUserAnswer = userAnswer;
}