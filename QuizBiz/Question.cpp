#include "Question.h"

Validator* Question::getValidator() {
	return mValidator;
}

std::string Question::getQuestion() {
	return mQuestion;
}