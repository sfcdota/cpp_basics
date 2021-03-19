#include <iostream>
#include <time.h>

struct Data
{
	std::string s1;
	int k;
	std::string s2;
};

void * serialize(void)
{
	std::string *s1 = new std::string();
	int k;
	std::string *s2 = new std::string();
	char *raw = new char[20];

	s1->resize(rand() % 50);
	s2->resize(rand() % 50);
	k = rand() % 50;
	for (unsigned i = 0; i < s1->size(); i++)
		(*s1)[i] = 65 + rand() % 2 * 32 + rand() % 26;
	for (unsigned i = 0; i < s2->size(); i++)
		(*s2)[i] = 65 + rand() % 2 * 32 + rand() % 26;

	std::cout << "s1 = " << *s1 << std::endl << "k = " << k << std::endl << "s2 = " << *s2 << std::endl;

	std::memcpy(raw, &s1, sizeof(std::string *));
	std::memcpy(raw + sizeof(std::string *), &k, sizeof(int));
	std::memcpy(raw + sizeof(std::string *) + sizeof(int), &s2, sizeof(std::string *));

	return (reinterpret_cast<void *>(raw));
}

Data * deserialize(void * raw)
{
	Data *data = new Data();
	char *info = reinterpret_cast<char *>(raw);
	std::string *temp;
	memcpy(&temp, info, sizeof(std::string *));
	data->s1 = *temp;
	delete temp;
	memcpy(&data->k, info + sizeof(std::string *), sizeof(int));
	std::memcpy(&temp, info + sizeof(std::string *) + sizeof(int), sizeof(std::string *));
	data->s2 = *temp;
	delete temp;
	delete info;
	return data;
}
int main()
{
	srand(time(NULL));
	Data *data = deserialize(serialize());
	std::cout << "data s1 = " <<  data->s1 << std::endl << "data k = " <<  data->k << std::endl << "data s2 = " << data->s2 << std::endl
		<< "data size = " << sizeof(data->s1) + sizeof(data->k) + sizeof(data->s2) << std::endl;
	delete data;
	return 0;
}
