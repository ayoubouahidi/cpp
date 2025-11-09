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
			Contact contact = phonebook.input_check();
			phonebook.add(contact);
		}
		if (std::strcmp(to_upper(operation).c_str(), "SEARCH") == 0)
		{
			i = 0;
			std::cout << "_____________________________________________" << std::endl;
			std::cout << "| " << "    index";
    		std::cout << "| " << "      nom" ;
			std::cout << "| " << "   prenom" ;
    		std::cout << "| " << " nickname" << "| " << std::endl;
			std::cout << "|__________|__________|__________|__________|" << std::endl;
			while (i < 8)
			{
				if (phonebook.array_contacts[i].getLname().empty())
					break;

				std::cout <<phonebook.array_contacts[i].checkname(std::to_string(i)) << std::flush;
				std::cout << "|" << std::flush;
				phonebook.array_contacts[i].display();
				i++;
			}
			std::cout << "_____________________________________________" << std::endl;
			std::cout << "entrer un index " << std::flush;
			std::getline(std::cin, index);
			if (!std::cin)
				break;
			Contact result = phonebook.search(std::atoi(index.c_str()));
			result.display(); 
		}
		if (std::strcmp(to_upper(operation).c_str(), "EXIT") == 0)
			break;
	}
}