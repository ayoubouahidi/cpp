#include <iostream>
#include "PhoneBook.h"
#include "contact.h"

PhoneBook::PhoneBook(void)
{
	PhoneBook::current_index = 0;
}

bool PhoneBook::is_full()
{
	return current_index >= 8;
}

void	PhoneBook::add(Contact contact)
{
	if (is_full())
		current_index = 0;
	PhoneBook::array_contacts[current_index] = contact;
	if (current_index < 8)
		current_index++;
}
Contact PhoneBook::search(int index)
{
	int i;

	i = 0;
	if (index > 8 || index <= 0)
		std::cout << "NOT FOUND" << std::endl;
	while (i < 8)
	{
		if (i + 1 == index)
			return (array_contacts[i]);
		i++;
	}
	std::cout << "NOT FOUND" << std::endl;
	return Contact();
	
}