#pragma once
#include "Validator.h"

class ValidatorNumerique : public Validator{
public:
	ValidatorNumerique(std::string userAnswer) {
		mUserAnswer = userAnswer;
	}
	~ValidatorNumerique() override = default;

	void setReponse() {
		
	}

	bool validate() override{
	
	}

	bool verifierReponse() override {
	
	}
private:
	float mReponse = 0;
};