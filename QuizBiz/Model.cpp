#include "Model.h"
Model::Model()

{
}

Model::~Model() {}

std::vector<Question> Model::getQuestions(int index) {
	return questionDB.at(index);
}