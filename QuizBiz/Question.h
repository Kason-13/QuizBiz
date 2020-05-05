#pragma once
#include <string>
#include <iostream>
#include "Validator.h"

class Question 
{
protected:
	Validator *mValidator;
	std::string mQuestion;
public:
	Question(Validator *validator) : mQuestion{}, mValidator{ validator } {
		if (validator == nullptr) throw std::invalid_argument("validator cannot be a null pointer"); 
	}
	virtual ~Question() { delete mValidator; };

	Validator *getValidator();
	std::string getQuestion();

	virtual void setReponse() = 0 ;
	virtual int getPoint() = 0;
	virtual void affichageInstruction() = 0;
};