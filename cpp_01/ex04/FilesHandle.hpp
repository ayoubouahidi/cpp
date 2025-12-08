#include <iostream>
#include <fstream>
#include <string>

class FilesHandle 
{
	private:
		std::string file;
		std::string str1;
		std::string str2;
			
	public:
		bool stopProgramme = false;
		FilesHandle(const std::string &file, const std::string &str1, const std::string &str2);
		std::string new_text();
		void find_occr(std::string *line, std::string str1, std::string str2);
		bool create_new_file(std::string text);
	
};