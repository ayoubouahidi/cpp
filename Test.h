#ifndef TEST_H
# define TEST_H

#include <string>


// cpp 02's test
// class Test
// {
// private:
// 	std::string nom;

// public:
// 	// Test(void);
// 	Test(const std::string &nom) : nom(nom)
//     {
//         std::cout << "constructeur declaration " << std::endl;
//     };

//     ~Test()
//     {
//         std::cout << "desconstucteur" << std::endl;
//     }

// 	void display(void)
//     {
//         std::cout << "name is <" << nom << ">"<< std::endl;
//     };

// 	Test& operator=(const Test& other )
//     {
// 		if (this == &other)
// 			return *this;
// 		nom = other.nom;
// 		return *this;
//     }
// };

// class Calculator {
// public:
//     int add(int a, int b) {
//         return a + b;
//     }
    
//     int subtract(int a, int b) {
//         return a - b;
//     }
    
//     int multiply(int a, int b) {
//         return a * b;
//     }
// };


class Personne
{
    private:
        std::string nom;
        int age;
    public:
        Personne(std::string nom, int age);
        virtual void show();
};

class Student : public Personne
{
    private:
        std::string classe;
    public:
        using Personne::Personne;
        Student(std::string nom, int age, std::string classe);
        void show() override;
};

class Emp : public Personne
{
    private:
        int salaire;
    public:
        Emp(std::string nom, int age, int salaire);
        void show();
};

#endif