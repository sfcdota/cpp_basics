#include "Pony.hpp"
Pony::Pony(std::string name, int age, int weight, int length, int height)
{
	name_ = name;
	age_ = age;
	weight_ = weight;
	length_ = length;
	height_ = height;
}

std::string Pony::GetName()
{
	return (name_);
}

int Pony::GetAge()
{
	return (age_);
}

double Pony::GetWeight()
{
	return (weight_);
}

double Pony::GetLength()
{
	return (length_);
}

double Pony::GetHeight()
{
	return (height_);
}

Pony::~Pony()
{

}
