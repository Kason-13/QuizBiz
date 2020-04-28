#pragma once
#include <string>
#include <iostream>
#include "Validator.h"

class Question 
{
public:
	Question() : mQuestion{} {}
	virtual ~Question() = default;
	virtual void affichageInstruction() = 0;
	virtual void setReponse() = 0;

	std::string mQuestion;
	Validator *validator;
};