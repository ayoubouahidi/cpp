#include <iostream>
#include "PhoneBook.h"
#include "contact.h"
#include <algorithm>

PhoneBook::PhoneBook(void)
{
	PhoneBook::current_index = 0;
}

bool PhoneBook::is_full()
{
	return current_index >= 8;
}
bool PhoneBook::is_valid_input(std::string str)
{
	int i;

	if (str.empty())
		return false;
	i = 0;
	std::replace(str.begin(), str.end(), '\t', ' ');
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return false;
		i++;
	}
	return true;
}


Contact	PhoneBook::input_check()
{
	std::string f_name_input;
	std::string l_name_input;
	std::string nickname_input;
	std::string phone_number_input;
	std::string darkest_secret_input;
	std::cout << "**** TEST ****" << std::endl;
	while(!is_valid_input(f_name_input))
	{
		std::cout << "entrer prenom : " << std::flush;
		std::getline(std::cin, f_name_input);
		if (!std::cin)
			break;		
	}
	while(!is_valid_input(l_name_input))
	{
		std::cout << "entrer nom : " << std::flush;
		std::getline(std::cin, l_name_input);
		if (!std::cin)
			break;
	}
	while(!is_valid_input(nickname_input))
	{
		std::cout << "entrer nickname : " << std::flush;
		std::getline(std::cin, nickname_input);
		if (!std::cin)
			break;	
	}
	while(!is_valid_input(phone_number_input))
	{
		std::cout << "entrer numero du tele : " << std::flush;
		std::getline(std::cin, phone_number_input);
		if (!std::cin)
			break;
	}
	while(!is_valid_input(darkest_secret_input))
	{
		std::cout << "entrer votre secret : " << std::flush;
		std::getline(std::cin, darkest_secret_input);
		if (!std::cin)
			break;	
	}
	Contact contact(f_name_input, l_name_input, nickname_input, phone_number_input, darkest_secret_input);
	return contact;
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