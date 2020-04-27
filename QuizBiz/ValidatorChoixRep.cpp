#include "ValidatorChoixRep.h"

void ValidatorChoixRep::setReponse(int indexRep) {
	mReponse = indexRep;
}

void ValidatorChoixRep::setNumberOfOptions(int newContrainte) {
	verifMax = newContrainte;
}