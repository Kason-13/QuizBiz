#pragma once
#include <string>

class Validator {

public:
	Validator(){}
	virtual ~Validator() = default;
	// methodes a redefinir dependant du type de validation
	virtual bool validate() = 0;
	virtual bool verifierReponse() = 0;
	//-----------------------------------------
	// la methode verifier va appeller la methode validate() et verifierReponse() qui sont redefini dependant du type de validation
	int verifier();

	void setUserAnswer(std::string userAnswer);


protected:
	std::string mUserAnswer="";
private:
	bool validated = false;
	bool verified = false;
};