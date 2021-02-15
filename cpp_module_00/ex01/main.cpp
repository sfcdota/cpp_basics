#include "Phonebook.hpp"
#include "includes.h"

int main()
{
	PhoneBook phonebook;
	std::string command;
	std::cout << "Welcome to the phonebook. You have space for the 8 contacts. Attempt to add more discards the most old created!" << std::endl;
	while (std::cin)
	{
		std::cout << "Available commands: ADD SEARCH EXIT. Other input will be discarded." << std::endl << std::endl;
		std::getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			phonebook.AddContact();
		else if (command == "SEARCH")
			phonebook.PrintContacts();
	}
	return (0);
}
