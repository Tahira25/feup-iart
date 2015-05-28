#include <cstdlib>
#include <iostream>
#include <string>

#include "Values.h"

int main() {
	// https://www.rulequest.com/see5-unix.html
	std::string input = Values::DATA_FOLDER + "input/parkinson";
	std::string options = "";

	std::string output = Values::DATA_FOLDER + "output/results.txt";

	std::string cmd = "c50/c5.0 -f " + input + " " + options + " > " + output;

	system(cmd.c_str());

	std::cout << "Done." << std::endl;

	return 0;
}
