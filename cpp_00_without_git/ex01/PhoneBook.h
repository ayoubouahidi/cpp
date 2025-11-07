#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "contact.h"

class PhoneBook
{
	private:
		int current_index;
	public:
		Contact array_contacts[8];
		PhoneBook(void);
		bool is_full();
		void add(Contact contact);
		Contact search(int i);
		// void display();

};
#endif