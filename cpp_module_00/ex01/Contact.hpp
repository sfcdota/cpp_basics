#ifndef _CONTACT_HPP_
#define _CONTACT_HPP_
#include "includes.h"
#ifndef CONTACT_FIELDS_NUM
#define CONTACT_FIELDS_NUM 11
#endif
class Contact
{
	public:
		Contact();
		void SetField(std::string field, int index);
		std::string GetField(int index);
		std::string GetTruncatedField(int index);
		~Contact();

	private:
		std::string info_[CONTACT_FIELDS_NUM];
};

#endif
