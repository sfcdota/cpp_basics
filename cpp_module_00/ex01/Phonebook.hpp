#ifndef _PHONEBOOK_HPP_
#define _PHONEBOOK_HPP_
#include "includes.h"
#include "Contact.hpp"
#ifndef MAX_CONTACTS
#define MAX_CONTACTS 8
#endif
class PhoneBook
{
	public:
		PhoneBook();
		void AddContact();
		void PrintContact(int index);
		void PrintContacts();
		~PhoneBook();
	private:
		Contact contacts_[MAX_CONTACTS];
		std::string field_names_[CONTACT_FIELDS_NUM];
		int index_;
		std::string input_;
};
#endif
