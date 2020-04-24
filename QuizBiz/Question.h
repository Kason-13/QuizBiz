#pragma once

#include <string>
#include <iostream>

class Question 
{
public:
	Question() : mQuestion{} {}
	virtual ~Question() = default;
	virtual void affichageInstruction() = 0;

	std::string mQuestion;
};