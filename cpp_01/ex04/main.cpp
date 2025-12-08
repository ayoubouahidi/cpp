#include <iostream>
#include <fstream>
#include <string>
#include "FilesHandle.hpp"

int main(int ac, char **av)
{
	std::string line;
	std::string text;
	std::ifstream input_stream(av[1]);
	
	bool is_opened;

	if (ac != 4)
	{
		std::cout << "ERROR : argument not matched " << std::endl;
		return 1;
	}
	FilesHandle filesHandle(av[1], av[2], av[3]);

	text = filesHandle.new_text();
	if (filesHandle.stopProgramme)
		return 1;
	std::cout << text << std::endl;
	is_opened = filesHandle.create_new_file(text);
	if (filesHandle.stopProgramme)
		return 1;	
	if (is_opened)
	{
		std::cout << "DONE : the file in your directory" << std::endl;
		return 1;
	}
	std::cout << "ERROR : the file is not in your directory " << std::endl;
}