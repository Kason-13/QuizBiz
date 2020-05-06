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
	// chaque question va avoir son propre validator
	Question(Validator *validator) : mQuestion{}, mValidator{ validator } {
		if (validator == nullptr) throw std::invalid_argument("validator cannot be a null pointer"); 
	}
	virtual ~Question() { delete mValidator; };

	// pour obtenir validator
	Validator *getValidator();
	// pour obtenir question
	std::string getQuestion();

	// methods a re-definir
	virtual void setReponse() = 0 ; // pour set la reponse dans les validators
	virtual int getPoint() = 0;
	virtual void affichageInstruction() = 0; // pour affichage d'instruction dependant de la question
};