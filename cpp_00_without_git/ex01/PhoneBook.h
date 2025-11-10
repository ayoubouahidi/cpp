#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.h"

class PhoneBook
{
	private:
		int current_index;
		bool is_full();
		std::string input_without_spaces(std::string str);
		bool iswhitespaces(std::string str);
		
	public:
		Contact array_contacts[8];
		bool is_valid_input(std::string str);
		bool is_valid_input_number(std::string str);
		PhoneBook(void);
		Contact	input_check();
		void add(Contact contact);
		Contact search(int i);

		// void display();

};
#endif