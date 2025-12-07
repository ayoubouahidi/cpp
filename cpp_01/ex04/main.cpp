#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main(int ac, char **av)
{
	std::string line;
	std::string text;

	if (ac != 4)
	{
		std::cout << "ERROR : argument not matched " << std::endl;
		return 1;
	}

	std::ifstream input_stream(av[1]);
	if (!input_stream)
	{
		std::cout << "ERROR : error to open file " << std::endl;
		return 1;
	}

	while (std::getline(input_stream, line))
	{
		text.append(line);
		if (!input_stream.eof())
			text.append("\n");
	}
	std::cout << text << std::endl;
}