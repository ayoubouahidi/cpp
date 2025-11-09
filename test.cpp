#include <iostream>
#include <algorithm>

// **** test1 ***
// using namespace std;

// float test_echo(int num)
// {
//     if (num % 2 == 0)
//         return true;
//     return false;
// }


// test **** test2 ***
#include "Test.h"

Test::Test(const std::string &nom) : nom(nom)
{
}


void Test::display()
{
	std::cout << "nom est :" << nom <<std::endl;
}

int main()
{
	// **** test1 ***
    // float result = test_echo(2);
    // cout << "the result is "<< result << endl;
	// int i;

	// i = 0;
	// std::string input;
	// std::cout << "entrer quelque chose : " << std::flush;
	// std::getline(std::cin, input) ;
	// std::cout << input << std::endl;

	// while (input[i])
	// {
	// 	i++;
	// }

	// test **** test2 ***
	// Test test("ayoub");
	// test.display();

	// test **** test3 ***

	// std::string str;
	// getline(std::cin, str);
	// std::replace(str.begin(), str.end(), '\t', ' ');
	// std::cout << str << std::endl;
	// test **** test4 ***
	std::string str = "      ayoub ouahidi   ";
	size_t found = str.find_last_not_of(' ');
	std::cout << str.substr(0, found + 1);
    return 0;
}
