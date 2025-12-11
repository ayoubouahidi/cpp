#ifndef TEST_H
# define TEST_H

#include <string>

// class Test
// {
// private:
// 	std::string nom;
// public:
// 	// Test(void);
// 	Test(const std::string &nom);
// 	void display(void);
	
// };

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    int subtract(int a, int b) {
        return a - b;
    }
    
    int multiply(int a, int b) {
        return a * b;
    }
};


#endif