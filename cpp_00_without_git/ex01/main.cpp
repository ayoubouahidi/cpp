#include "contact.h"
#include <iostream>
#include <cstring>
#include "PhoneBook.h"

std::string to_upper(std::string av)
{
	int i;

	
	i = 0;
	while (av[i])
	{
		if (av[i] >= 97 && av[i] <= 122)
			av[i] = av[i] - 32;
		i++;
	}
	return av;
}

int main()
{
	PhoneBook phonebook;
	int i;
	std::string index;

	while (1)
	{
		std::string operation;
		std::cout << "enter votre operation les choix disponibles sont (ADD , SEARCH, EXIT ) : " << std::flush;
		std::getline(std::cin, operation);
		if (!std::cin)
			break;
		if (std::strcmp(to_upper(operation).c_str(), "ADD") == 0)
		{
			std::string f_name_input;
			std::string l_name_input;
			std::string nickname_input;
			std::string phone_number_input;
			std::string darkest_secret_input;
		
			while(f_name_input.empty())
			{
				std::cout << "entrer prenom : " << std::flush;
				std::getline(std::cin, f_name_input);
			} 
			while(l_name_input.empty())
			{
				std::cout << "entrer nom : " << std::flush;
				std::getline(std::cin, l_name_input);
			}
			while(nickname_input.empty())
			{
				std::cout << "entrer nickname : " << std::flush;
				std::getline(std::cin, nickname_input);				
			}
			while(phone_number_input.empty())
			{
				std::cout << "entrer numero du tele : " << std::flush;
				std::getline(std::cin, phone_number_input);				
			}
			while(darkest_secret_input.empty())
			{
				std::cout << "entrer votre secret : " << std::flush;
				std::getline(std::cin, darkest_secret_input);				
			}
			
			Contact contact(f_name_input, l_name_input, nickname_input, phone_number_input, darkest_secret_input);
			phonebook.add(contact);
		}
		if (std::strcmp(to_upper(operation).c_str(), "SEARCH") == 0)
		{
			i = 0;
			while (i < 8)
			{
				if (phonebook.array_contacts[i].getLname().empty())
					break;
				std::cout << i << std::flush;
				std::cout << "|" << std::flush;
				phonebook.array_contacts[i].display();
				i++;
			}
			std::cout << "entrer un index " << std::flush;
			std::getline(std::cin, index);
			Contact result = phonebook.search(std::atoi(index.c_str()));
			result.display(); 
		}
		if (std::strcmp(to_upper(operation).c_str(), "EXIT") == 0)
			break;
	}
}