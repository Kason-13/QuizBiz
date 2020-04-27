#pragma once
#include <string>

class Validator {

public:
	Validator(){}
	virtual ~Validator() = default;
	virtual bool validate() = 0;
	virtual bool verifierReponse() = 0;
	bool verifier();
	void setUserAnswer(std::string userAnswer);
	virtual void setReponse(bool reponse) = 0;
	virtual void setReponse(int indexRep) = 0;
	virtual void setReponse(std::string reponseText) = 0;
	virtual void setReponse(float reponse) = 0;


protected:
	std::string mUserAnswer;
private:
	bool validated = false;
	bool verified = false;
};