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
	// pour valider si c'est un nombre/nombre a virgule
	bool validate() override{
		if (isAIntOrFloat())
			return true;
		return false;
	}
	// pour verifier si c'est la bonne reponse
	bool verifierReponse() override {
		if (mReponse == userResponse) return true;
		return false;
	}
private:
	float mReponse = 0;
	float userResponse = 0;
};