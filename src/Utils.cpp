#include "Utils.h"

#include <cstring>

std::vector<std::string> Utils::splitString(const std::string& str,
		const std::string& separators) {
	// convert the passed string to a c string
	char *cStr = new char[str.length() + 1];
	strcpy(cStr, str.c_str());

	std::vector<std::string> tokens;
	char *p = strtok(cStr, separators.c_str());

	while (p) {
		tokens.push_back(p);

		p = strtok(nullptr, separators.c_str());
	}

	// delete the no longer used c string
	delete[] cStr;

	return tokens;
}
