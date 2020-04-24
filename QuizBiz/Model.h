#pragma once
#include "Question.h"
#include "QuestionsDB.h"
#include <vector>

class Model 
{
public:
	Model();
	~Model();
	std::vector<Question*> getQuestions(int index);

private:
	QuestionDB DB;
	std::vector<std::vector<Question*>> questionDB;
};