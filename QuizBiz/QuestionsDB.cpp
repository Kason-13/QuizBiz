#include "QuestionsDB.h"

void QuestionDB::remplirDB() {
	DB = CreateQuestions();
}

std::vector<std::vector<Question*>> QuestionDB::getDB() {
	if (DB.empty())
		remplirDB();
	return DB;
}

std::vector<std::vector<Question*>> QuestionDB::CreateQuestions() {
	std::vector<std::vector<Question*>> toReturn;
	std::vector<Question*>newQuestionSet;
	newQuestionSet.push_back(new QuestionText("write test question patate", "test question patate", 1, 25,10));
	newQuestionSet.push_back(new QuestionVraisFaux("VBA c'est la vie?", false,10));
	newQuestionSet.push_back(new QuestionNumerique("1+1",false,2,5));
	newQuestionSet.push_back(new QuestionVraisFaux("fin de session bizzare?", true,10));
	newQuestionSet.push_back(new QuestionNumerique("2+3", false, 5,5));
	newQuestionSet.push_back(new QuestionNumerique("4-1", false, 3,5));
	toReturn.push_back(newQuestionSet);
	newQuestionSet.clear();
	newQuestionSet.push_back(new QuestionChoixRep("Quel de ces mots n'est pas un verbe", std::vector<std::string>{ "manger","dormir","regarder","vert" }, 4, 10));
	newQuestionSet.push_back(new QuestionVraisFaux("HTML veut dire 'hyper trouvaille magic line'?", false, 5));
	newQuestionSet.push_back(new QuestionNumerique("0+0", false, 0, 5));
	newQuestionSet.push_back(new QuestionVraisFaux("ReactJS est un framework de VBA", false, 10));
	newQuestionSet.push_back(new QuestionVraisFaux("javascript et java sont la meme chose", false, 5));
	newQuestionSet.push_back(new QuestionNumerique("150+150", false, 300, 5));
	toReturn.push_back(newQuestionSet);
	return toReturn;
}