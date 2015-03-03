#pragma once

#include <cmath>
#include <vector>
#include <string>

namespace Utils {

constexpr float logBase2(float x) {
	return log(x) / log(2);
}

std::vector<std::string> splitString(const std::string& str,
		const std::string& separators);

}
