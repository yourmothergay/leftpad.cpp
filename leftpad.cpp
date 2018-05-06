#include "leftpad.hpp"
#include <string>

std::string leftpad::leftpad(const std::string &str, int target_length)
{
	std::string s;

	while(s.length() + str.length() < target_length)
		s += " ";

	s += str;
	
	return s;
}
