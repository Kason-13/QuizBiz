#include "ValidatorText.h"

// permet de split en un vector de mots
std::vector<std::string> ValidatorText::splitText(std::string strToSplit) {
	char delimiter = ' ';
	std::vector<std::string> toReturn;
	std::string strToAppend = "";
	std::string copyStrToSplit = strToSplit + ' ';
	for (size_t index{}; index < copyStrToSplit.size(); ++index)
	{
		if (copyStrToSplit.at(index) == delimiter)
		{
			toReturn.push_back(strToAppend);
			strToAppend = "";
		}
		else
			strToAppend += copyStrToSplit.at(index);
	}
	return toReturn; // vecteur de mots splitted
}

void ValidatorText::setReponse(std::string reponseText){
		mReponse = reponseText;
}

void ValidatorText::setContraintes(int min, int max) {
	minLenght = min;
	maxLength = max;
}

