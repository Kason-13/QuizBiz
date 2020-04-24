#include "Model.h"
Model::Model()

{
}

Model::~Model() {}

std::vector<Question*> Model::getQuestions(int index) {
	questionDB.push_back(DB.getDB());
	return questionDB.at(index);
}