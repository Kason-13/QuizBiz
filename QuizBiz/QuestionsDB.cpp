#include "QuestionsDB.h"

void QuestionDB::remplirDB() {
	DB = CreateQuestions();
}

std::vector<Question*> QuestionDB::getDB() {
	if (DB.empty())
		remplirDB();
	return DB;
}

// a verifier
std::vector<Question*> QuestionDB::CreateQuestions() {
	std::vector<Question*> toReturn;
	toReturn.push_back(new QuestionVraisFaux("fin de session bizzare?", true,validatorVraiFauxPTR));
	toReturn.push_back(new QuestionNumerique("1+1",false,2,validatorNumeriquePTR));
	toReturn.push_back(new QuestionText("write test", "test", 1, 10,validatorTextPTR));
	toReturn.push_back(new QuestionVraisFaux("VBA c'est la vie?", false,validatorVraiFauxPTR));
	return toReturn;
}

void QuestionDB::setValidatorPtr(ValidatorChoixRep *vChoix,
	ValidatorNumerique *vNum,
	ValidatorText *vText,
	ValidatorVraisFaux *vVraiFaux) 
{
	validatorChoixRepPTR = vChoix;
	validatorNumeriquePTR = vNum;
	validatorTextPTR = vText;
	validatorVraiFauxPTR = vVraiFaux;
}