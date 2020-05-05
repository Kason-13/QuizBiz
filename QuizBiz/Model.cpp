#include "Model.h"
Model::Model()

{
}

Model::~Model() {}

std::vector<Question*> Model::getQuestions(int index) {
	questionDB = DB.getDB();
	return questionDB.at(index);
}

ValidatorChoixRep Model::getValidatorChoixRep() {
	return validatorChoixRep;
}
ValidatorNumerique Model::getValidatorNumerique() {
	return validatorNumerique;
}
ValidatorText Model::getValidatorText() {
	return validatorText;
}
ValidatorVraisFaux Model::getValidatorVraiFaux() {
	return validatorVraiFaux;
}