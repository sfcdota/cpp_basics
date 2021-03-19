#include <iostream>
#include <string>
#include <limits.h>
#include <iomanip>

int main(int argc, char **argv)
{
	double res;
	char c;
	if (argc != 2)
		std::cout << "wrong number of parameters" << std::endl;
	std::string input = static_cast<std::string>(argv[1]);
	if (input == "-inff" || input == "inff" || input == "-inf" || input == "inf" || input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << (input[0] == '-' ? "-inff" : input[0] == 'n' ? "nanf" : "inff") << std::endl;
		std::cout << "double: " << (input[0] == '-' ? "-inf" : input[0] == 'n' ? "nan" : "inf") << std::endl;
		return 0;
	}
	if (input.size() == 1 && !std::isdigit(input[0]))
		res = static_cast<double>(input[0]);
	else
		res = static_cast<double>(atof(argv[1]));
	if (std::isprint(c = static_cast<char>(res)))
		std::cout << "char: " << static_cast<char>(res) << std::endl;
	else
		std::cout << "char: " <<  "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(res) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1)  << static_cast<float>(res) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision (1) << static_cast<double>(res) << std::endl;

	return 0;
}
