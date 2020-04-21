#include "QuestionsDB.h"

void QuestionDB::remplirDB() {
	DB = CreateQuestions();
}

std::vector<Question> QuestionDB::getDB() {
	if (DB.empty)
		remplirDB();
	return DB;
}

std::vector<Question> QuestionDB::CreateQuestions() {
	std::vector<Question> toReturn;
}