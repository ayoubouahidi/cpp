#include <iostream>
#include "Contact.h"
#include <iomanip>

Contact::Contact():f_name(), l_name(), nickname(), phone_number(""), darkest_secret("")
{}

Contact::Contact(const std::string &f_name, const std::string &l_name, const std::string &nickname, const std::string &phone, const std::string &darkest):f_name(f_name), l_name(l_name), nickname(nickname), phone_number(phone), darkest_secret(darkest)
{
}

void Contact::display()
{
    std::cout << "|" << std::setw(10) << checkname(this->f_name);
    std::cout << "|" << std::setw(10) << checkname(this->l_name);
    std::cout << "|" << std::setw(10) << checkname(this->nickname);
    std::cout << "|" << std::endl;
}
std::string Contact::checkname(const std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

std::string Contact::getName() const
{
	return this->f_name;
}

std::string Contact::getLname() const
{
	return this->l_name;
}

std::string Contact::getNickname() const
{
	return this->nickname;
}

void	Contact::display_all()
{
	std::cout << "nom : " << this->f_name << std::endl;
	std::cout << "prenom : " << this->l_name << std::endl;
	std::cout << "nickname : " << this->nickname << std::endl;
	std::cout << "phone number : " << this->phone_number << std::endl;
	std::cout << "darkest secret  : " << this->darkest_secret << std::endl;

}
