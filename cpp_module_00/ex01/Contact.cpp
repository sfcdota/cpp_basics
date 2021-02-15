#include "Contact.hpp"

Contact::Contact()
{

}

void Contact::SetField(std::string field, int index)
{
	info_[index] = field;
}

std::string Contact::GetField(int index)
{
	return (info_[index]);
}

std::string Contact::GetTruncatedField(int index)
{
	int size;
	std::string out = GetField(index);
	size = out.size();
	out = out.substr(0, 10);
	if (size > 10)
		out[9] = '.';
	return (out);
}

Contact::~Contact()
{

}
