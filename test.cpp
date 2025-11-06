#include <iostream>

using namespace std;

float test_echo(int num)
{
    if (num % 2 == 0)
        return true;
    return false;
}

int main()
{
    // float result = test_echo(2);
    // cout << "the result is "<< result << endl;
	int i;

	i = 0;
	std::string input;
	std::cout << "entrer quelque chose : " << std::flush;
	std::getline(std::cin, input) ;
	std::cout << input << std::endl;

	// while (input[i])
	// {
	// 	i++;
	// }
	


    return 0;
}
