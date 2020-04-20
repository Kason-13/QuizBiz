#pragma once
#include "Question.h"
#include <vector>

class Model 
{
public:
	Model();
	~Model();
	std::vector<Question> getQuestions(int index);

private:
	std::vector<std::vector<Question>> questionDB;
};