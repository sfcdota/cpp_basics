#include <iostream> 

int main(int argc, char **argv)
{
	std::string temp;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			temp = argv[i];
			for (unsigned long j = 0; j < temp.size(); j++)
				std::cout << (char)std::toupper(temp[j]);
		}
		std::cout << '\n';
	}
	return (0);
}