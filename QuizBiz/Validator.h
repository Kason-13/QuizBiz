#pragma once
#include <string>

class Validator {

public:
	Validator(){}
	virtual ~Validator() = default;
	virtual bool validate() = 0;
	virtual bool verifierReponse() = 0;
	bool verifier();

protected:
	std::string mUserAnswer;
private:
	bool validated = false;
	bool verified = false;
};