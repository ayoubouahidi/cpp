#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <string>

class Contact
{
	public:
		Contact();
		Contact(const std::string &f_name, const std::string &l_name, const std::string &nickname, const std::string &phone, const std::string &darkest);
		std::string f_name; 
	private:
		std::string l_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;

		// Contact(const std::string &f_name, const std::string &l_name, const std::string &nickname, const std::string &phone);
};

#endif