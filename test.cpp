#include <iostream>
#include <algorithm>
#include <cmath>
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

// Test::Test(const std::string &nom) : nom(nom)
// {
// }


// void Test::display()
// {
// 	std::cout << "nom est :" << nom <<std::endl;
// }

// void myFunction() {
//   // Local variable that belongs to myFunction
//   int x = 5;
// }
// namespace first
// {
// 	int x = 0;
// }
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
// 	std::string str = "      ayoub ouahidi   ";
// 	size_t found = str.find_last_not_of(' ');
// 	std::cout << str.substr(0, found + 1);
//     return 0;

// test **** test 5 ***
	// using namespace first;
	// // // int x = 1;
	// // myFunction();
	// std::cout << x ;

// ******************************************* les testes cpp01 *******************************************


// test **** test 6 ***
	// int *p = NULL;
	// p = new int;
	// *p = 17;

	// std::string freePizza[5] = {"ayoubouahidi1", "ayoubouahidi2", "ayoubouahidi2", "ayoubouahidi2" , "ayoubouahidi5"};
	// std::string *pFreePizza ;
	// pFreePizza = freePizza; 

	// std::cout << "l'adress est :" << p << std::endl;
	// std::cout << "valeur est :" << *p << std::endl;
	
	// std::cout << "array example (adress) :" << pFreePizza << std::endl;
	// std::cout << "array example (value) :" << *++pFreePizza << std::endl;

// test to pointer function 

	// Calculator cal;

	// int (Calculator::*oper)(int, int);
	// oper = &Calculator::add;
	// int result = (cal.*oper)(10,10);
	// std::cout << result << std::endl;


	// THIS IS AYOUB , THIS IS A TEST THAT I WILL MAKE FOR A REVESION OF CPP 01 CORRECTION . :) 
// 	int *a ;
// 	*a = 1;
	
// 	int  &ref_a = *a;
// 	std::cout << a << std::endl;
// 	std::cout << &ref_a << std::endl;

//  ********************************* CPP _ 02  *********************************

	// Test t1("ayoub");
	// Test t2("test");
	// t1 = t2;
	// t1.display();

	float i = 17.0;
	std::cout << std::roundf(i) << std::endl;
}
