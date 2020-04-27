#include "ValidatorNumerique.h"

void ValidatorNumerique::setReponse(float reponse){
	mReponse = reponse;
}

bool ValidatorNumerique::isAIntOrFloat() {
	for (int index{}; index < mUserAnswer.length(); ++index) {
		if (!std::isdigit(mUserAnswer.at(index)) && mUserAnswer.at(index) != '.')
			return false;
	}
	userResponse = std::stof(mUserAnswer);
	return true;
}