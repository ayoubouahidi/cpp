#include "contact.h"
#include <iostream>
#include <cstring>

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
	std::string operation;
	std::cout << "enter votre operation les choix disponibles sont (ADD , SEARCH, EXIT ) : " << std::endl;
	std::getline(std::cin, operation);
	
	if (std::strcmp(to_upper(operation).c_str(), "ADD"))
	{
		std::string f_name_input;
		std::string l_name_input;
		std::string nickname_input;
		std::string phone_number_input;
		std::string darkest_secret_input;
	
		std::cout << "entrer prenom : " << std::flush;
		std::getline(std::cin, f_name_input);
		std::cout << "entrer nom : " << std::flush;
		std::getline(std::cin, l_name_input);
		std::cout << "entrer nickname : " << std::flush;
		std::getline(std::cin, nickname_input);
		std::cout << "entrer numero du tele : " << std::flush;
		std::getline(std::cin, phone_number_input);
		std::cout << "entrer votre secret : " << std::flush;
		std::getline(std::cin, darkest_secret_input);
	}

}