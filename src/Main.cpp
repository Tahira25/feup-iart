#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Utils.h"
#include "Values.h"

float entropy(int yes, int no) {
	int total = yes + no;

	float yesByTotal = static_cast<float>(yes) / total;
	float noByTotal = static_cast<float>(no) / total;

	return -yesByTotal * Utils::logBase2(yesByTotal)
			- noByTotal * Utils::logBase2(noByTotal);
}

std::vector<std::vector<float>> loadData(std::string filePath) {
	std::vector<std::vector<float>> data;

	std::ifstream file;
	file.open(filePath);

	if (file.good()) {
		while (!file.eof()) {
			std::string entryStr;
			file >> entryStr;

			/*
			 * C++11 introduced 'rvalue references' that let a mutable reference be bound to an rvalue.
			 * rvalue references use the && syntax instead of just &.
			 *
			 * In this particular case, before C++11 was introduced, doing something like
			 * std::vector<std::string> entryTokens = split(line, ","); would copy the temporary vector
			 * built inside the split function to entryTokens, and then destroy the temporary vector.
			 * That is not very smart! Why copy and then destroy the vector, when it could be *moved*
			 * to entryTokens instead? That is exactly what the rvalue references are used for.
			 */
			std::vector<std::string>&& entryTokens = Utils::splitString(
					entryStr, ",");

			std::vector<float> entryData;
			for (auto str : entryTokens)
				entryData.push_back(stof(str));

			data.push_back(entryData);
		}
	} else {
		std::cerr << "Error: Could not read from " << filePath << std::endl;
	}

	file.close();

	return data;
}

int main() {
	std::vector<std::vector<float>>&& trainData = loadData(
			Values::TRAIN_DATA_PATH);

	if (!trainData.empty()) {
		// print train data
		for (auto entry : trainData) {
			for (auto i : entry)
				std::cout << i << " ";
			std::cout << std::endl;
		}
	}

	return 0;
}
