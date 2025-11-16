#include "Contact.h"
#include <iostream>
#include <cstring>
#include "PhoneBook.h"
#include <iomanip>
#include <sstream>

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

std::string intToString(int num) {
    std::stringstream ss;
    ss << num;
    return ss.str();
}

int main()
{
	PhoneBook phonebook;
	int i;
	while (1)
	{
		std::string index;
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
				std::cout << std::setw(10) << phonebook.array_contacts[i].checkname(intToString(i)) << std::flush;
				phonebook.array_contacts[i].display();
				i++;
			}
			std::cout << "_____________________________________________" << std::endl;
			while (1)
			{
				std::cout << "entrer un index " << std::flush;
				std::getline(std::cin, index);
				if (!std::cin)
					break;
				if (!phonebook.is_valid_input_number(index))
				{
					std::cout << "Index invalide. Veuillez entrer un nombre valide." << std::endl;
					continue;
				}

				int numb;
				std::stringstream strr;
				strr << index;
				strr >> numb;
				// if(str.fail())




				// int idx = std::atoi(index.c_str());
				Contact result = phonebook.search(numb);
				if (!result.getLname().empty())
					result.display_all();
				break;
			}
		}
		if (std::strcmp(to_upper(operation).c_str(), "EXIT") == 0)
			break;
	}
}