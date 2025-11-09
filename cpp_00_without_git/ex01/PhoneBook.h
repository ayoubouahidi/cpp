#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.h"

class PhoneBook
{
	private:
		int current_index;
		bool is_full();
		bool is_valid_input(std::string str);
		std::string input_without_spaces(std::string str);
	public:
		Contact array_contacts[8];
		PhoneBook(void);
		Contact	input_check();
		void add(Contact contact);
		Contact search(int i);

		// void display();

};
#endif