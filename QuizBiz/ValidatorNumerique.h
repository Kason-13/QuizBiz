#pragma once
#include "Validator.h"
#include <string>
#include <cctype>

class ValidatorNumerique : public Validator{
public:
	ValidatorNumerique() {}
	~ValidatorNumerique() override = default;

	void setReponse(float reponse);

	bool isAIntOrFloat();

	//overriden methods from Validator class
	bool validate() override{
		if (isAIntOrFloat())
			return true;
		return false;
	}

	bool verifierReponse() override {
		if (mReponse == userResponse) return true;
		return false;
	}
private:
	float mReponse = 0;
	float userResponse = 0;
};