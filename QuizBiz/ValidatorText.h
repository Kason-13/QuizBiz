#pragma once
#include "Validator.h"
#include <string>
#include <regex>
#include <vector>

class ValidatorText : public Validator {
public:
	ValidatorText(std::string userAnswer) {
		mUserAnswer = userAnswer;
	}
	~ValidatorText() override = default;

	void setReponse(std::string reponseText) {
		mReponse = reponseText;
	}

	void setContraintes(int min, int max) {
		minLenght = min;
		maxLength = max;
	}

	std::vector<std::string> splitText(std::string strToSplit);

	//overriden methods from Validator class
	bool validate() override {
		int sizeOfAnswer = mReponse.size();
		if (sizeOfAnswer<minLenght || sizeOfAnswer>maxLength)
			return false;
		return true;
	}

	bool verifierReponse() override {
		wordList = splitText(mUserAnswer);
		std::vector<std::string> mReponseWordList = splitText(mReponse);
		float userScore = 0;
		int dividend = 0;
		int divider = mReponseWordList.size();
		for (int index{}; index < divider; ++index)
		{
			if (std::find(wordList.begin(), wordList.end(), mReponseWordList.at(index)) != wordList.end())
				dividend++;
		}
		userScore = (((float)dividend) / ((float)divider));
		return userScore >= 0.65 ? true : false;
	}

private:
	std::string mReponse;
	int minLenght = 0;
	int maxLength = 0;
	std::vector<std::string> wordList;
};