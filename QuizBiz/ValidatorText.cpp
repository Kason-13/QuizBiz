#include "ValidatorText.h"

std::vector<std::string> ValidatorText::splitText(std::string strToSplit) {
	char delimiter = ' ';
	std::vector<std::string> toReturn;
	std::string strToAppend = "";
	for (int index{}; index < strToSplit.size(); ++index)
	{
		if (strToSplit.at(index) == delimiter)
		{
			toReturn.push_back(strToAppend);
			strToAppend = "";
		}
		else
			strToAppend += strToSplit.at(index);
	}
	return toReturn;
}

