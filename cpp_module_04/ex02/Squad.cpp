#include "Squad.hpp"

Squad::Squad()
{
	count = 0;
	army = nullptr;
}

Squad::Squad(Squad const & in)
{
	count = 0;
	army = nullptr;
	if ((count = in.getCount()))
	{
		army = new ISpaceMarine*[count];
		for (int i = 0; i < count; i++)
			army[i] = in.getUnit(i)->clone();
	}
}

Squad::~Squad()
{
	if (army)
	{
		for(int i = 0; i < count; i++)
			delete army[i];
		delete army;
	}
}

Squad& Squad::operator=(Squad const & in)
{
	if (army)
	{
		for(int i = 0; i < count; i++)
			delete army[i];
		delete army;
		army = nullptr;
	}
	if ((count = in.getCount()))
	{
		army = new ISpaceMarine*[count];
		for (int i = 0; i < count; i++)
			army[i] = in.getUnit(i)->clone();
	}
	return *this;
}

int Squad::getCount(void) const
{
	return count;
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (n < 0 || n > count)
		return nullptr;
	return army[n];
}

int Squad::push(ISpaceMarine* spacemarine)
{
	if (!spacemarine)
		return count;
	for(int i = 0; i < count; i++)
		if(army[i] == spacemarine)
			return count;
	ISpaceMarine** new_army = new ISpaceMarine*[count + 1];
	for(int i = 0; i < count; i++)
	{
		new_army[i] = army[i];
	}
	if (army)
		delete army;
	new_army[count] = spacemarine;
	army = new_army;
	++count;
	return count;
}
