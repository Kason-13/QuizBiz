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
	toReturn.push_back(new QuestionVraisFaux("fin de session bizzare?", true));
	toReturn.push_back(new QuestionNumerique("1+1",false,2));
	toReturn.push_back(new QuestionText("write test", "test", 1, 10));
	toReturn.push_back(new QuestionVraisFaux("VBA c'est la vie?", false));
	return toReturn;
}