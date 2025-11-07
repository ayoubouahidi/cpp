#ifndef TEST_H
# define TEST_H

#include <string>

class Test
{
private:
	std::string nom;
public:
	// Test(void);
	Test(const std::string &nom);
	void display(void);
	
};



#endif