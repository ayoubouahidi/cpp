#include <iostream>
#include "contact.h"

Contact::Contact():f_name(), l_name(), nickname(), phone_number(""), darkest_secret("")
{}

Contact::Contact(const std::string &f_name, const std::string &l_name, const std::string &nickname, const std::string &phone, const std::string &darkest):f_name(f_name), l_name(l_name), nickname(nickname), phone_number(phone), darkest_secret(darkest)
{
}

