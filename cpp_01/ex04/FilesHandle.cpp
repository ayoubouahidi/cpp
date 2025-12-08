#include "FilesHandle.hpp"
#include <iostream>
#include <string>

FilesHandle::FilesHandle(const std::string &file, const std::string &str1, const std::string &str2)
: file(file), str1(str1), str2(str2)
{}


std::string FilesHandle::new_text()
{
	std::ifstream input_stream(this->file);
	std::string line;
	std::string text;

	if (!input_stream)
	{
		std::cout << "ERROR : error to open file (try to find a string) " << std::endl;
		this->stopProgramme = true;
		return "";
	}
	while (std::getline(input_stream, line))
	{
		find_occr(&line, this->str1 , this->str2);
		text.append(line);
		if (!input_stream.eof())
			text.append("\n");
	}
	return text;
}

void FilesHandle::find_occr(std::string *line, std::string str1,
	std::string str2)
{
	int		i;
	size_t	pos;
	int		result;
	std::string new_line;
	std::string sub_str;
	
	i = 0;
	pos = line->find(str1);
	result = 0;
	if (pos != std::string::npos) // if not found we use npos  
	{
		sub_str = line->substr(pos, str1.length());
		if (sub_str.compare(str1) == 0)
		{
			line->erase(pos, str1.length());
			line->insert(pos, str2);
		}
	}
}

bool FilesHandle::create_new_file(std::string text)
{
	std::ofstream outFile(this->file + ".replace");

	if (!outFile.is_open())
	{
		std::cout << "ERROR : error to open file " << std::endl;
		this->stopProgramme = true;
		return false;
	}
	outFile << text;
	outFile.close();
	return true;
}
