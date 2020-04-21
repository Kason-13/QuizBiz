#pragma once
#include <vector>
#include "Question.h"
/*
	DATABASE DE QUESTION, LA SEUL METHODE A APPELER EST getDB(), C'EST UN SINGLETON
	QUI VA CREER LA DB SI ELLE N'EST PAS CREER, ELLE VA JUSTE RETOURNER LA DB SI ELLE 
	EXISTE DEJA.
*/
class QuestionDB {

public:
	void remplirDB();
	std::vector<Question> CreateQuestions();
	std::vector<Question> getDB();
	void insertQuestion();

private:
	std::vector<Question> DB;
};