#include "QuestionsDB.h"

void QuestionDB::remplirDB() {
	DB = CreateQuestions();
}

std::vector<Question> QuestionDB::getDB() {
	if (DB.empty())
		remplirDB();
	return DB;
}

std::vector<Question> QuestionDB::CreateQuestions() {
	std::vector<Question> toReturn;
	toReturn.push_back(QuestionVraisFaux("fin de session bizzare?", true));
	toReturn.push_back(QuestionNumerique("1+1",false,2));
	toReturn.push_back(QuestionText("write test", "test", 1, 10));
	toReturn.push_back(QuestionVraisFaux("VBA c'est la vie?", false));
	return toReturn;
}