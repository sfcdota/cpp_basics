#include <iostream>
#include <fstream>

int main(int argc, char* argv[])
{
	std::string filename;
	std::string str_to_be_replaced;
	std::string str;

	if (argc != 4 || !((filename = argv[1]).size())
	|| !(str_to_be_replaced =  argv[2]).size() || !(str =  argv[3]).size())
	{
		std::cout << "Parameter error" << std::endl;
		return (0);
	}
	std::ifstream in;
	std::ofstream out;
	in.open(filename);
	if (!in)
	{
		std::cout << "Open source file error" << std::endl;
		return (0);
	}
	out.open(filename.append(".replace"), std::ofstream::out | std::ofstream::trunc);
	if (!out)
	{
		std::cout << "Open dest file error" << std::endl;
		return (0);
	}
	std::string temp;
	size_t index;
	while (getline(in, temp)) {
		index = 0;
		while ((index = temp.find(str_to_be_replaced, index)) != std::string::npos)
			temp.replace(index, str.size(), str);
		out << temp << std::endl;
	}
	in.close();
	out.close();
	return (0);
}
