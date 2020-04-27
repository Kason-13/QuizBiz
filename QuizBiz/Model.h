#pragma once
#include "Question.h"
#include "QuestionsDB.h"
#include <vector>

#include "ValidatorChoixRep.h"
#include "ValidatorNumerique.h"
#include "ValidatorText.h"
#include "ValidatorVraiFaux.h"

class Model 
{
public:
	Model();
	~Model();
	std::vector<Question*> getQuestions(int index);

private:
	QuestionDB DB;
	std::vector<std::vector<Question*>> questionDB;

	// instances des validators
	ValidatorChoixRep validatorChoixRep;
	ValidatorNumerique validatorNumerique;
	ValidatorText validatorText;
	ValidatorVraisFaux validatorVraiFaux;
};