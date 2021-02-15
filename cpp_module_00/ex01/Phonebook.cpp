#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	field_names_[0] = "first name";
	field_names_[1] = "last name";
	field_names_[2] = "nickname";
	field_names_[3] = "login";
	field_names_[4] = "postal address";
	field_names_[5] = "email address";
	field_names_[6] = "phone number";
	field_names_[7] = "birthday date";
	field_names_[8] = "favorite meal";
	field_names_[9] = "underwear color";
	field_names_[10] = "darkest secret";
	index_ = -1;
}

void PhoneBook::AddContact()
{
	index_ = ++index_ % MAX_CONTACTS;
	std::cout << std::endl << "Adding a new contact. Please, input contact's information one by one" << std::endl;
	for (int i = 0; i < CONTACT_FIELDS_NUM; i++) {
		do {
		std::cout << std::endl << "Enter contact's " << field_names_[i] << ": ";
		std::getline(std::cin, input_);
		}
		while (!input_.size());
		contacts_[index_].SetField(input_, i);
	}
	std::cout << std::endl << "New contact was successfully added to the phonebook" << std::endl;
}

void PhoneBook::PrintContact(int index)
{
	std::cout << std::endl << "Contact #" << index << std::endl;
	for (int i = 0; i < CONTACT_FIELDS_NUM; i++)
		std::cout << field_names_[i] << ": " << contacts_[index].GetField(i) << std::endl;
	std::cout << std::endl;
}

void PhoneBook::PrintContacts()
{
	std::cout << std::endl << "Phonebook now has " << index_ + 1 << " contacts:" << std::endl;
	std::cout <<
		std::setw(10) << std::right << "index" << "|" <<
		std::setw(10) << std::right << "first name" << "|" <<
		std::setw(10) << std::right << "last name" << "|" <<
		std::setw(10) << std::right << "nickname" << std::endl;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		if (!contacts_[i].GetField(0).empty())
		{
			std::cout <<
			std::setw(10) << std::right << i + 1 << "|" <<
			std::setw(10) << std::right << contacts_[i].GetTruncatedField(0) << "|" <<
			std::setw(10) << std::right << contacts_[i].GetTruncatedField(1) << "|" <<
			std::setw(10) << std::right << contacts_[i].GetTruncatedField(2) << std::endl;
		}
	}
	std::cout << std::endl << "Enter the index of a contact to see additional info."
	<< std:: endl << "If input is not numerical or not correct, command discards" << std::endl;
	std::getline(std::cin, input_);
	if (input_.size() == 1 && input_[0] >= '1' && input_[0] <= '8' && !contacts_[input_[0] - 1 - '0'].GetField(0).empty())
		PrintContact(input_[0] - 1 - '0');
}

PhoneBook::~PhoneBook()
{

}
