#include <iostream>

class FilesHandle 
{
	private:
		std::string text;
		std::string str1;
		std::string str2;

		void find_occr(std::string *line, std::string *str1, std::string *str2);
		std::string new_text(std::string *text, std::string *str1, std::string *str2);
	
	public:	
		bool create_new_file(std::string text);
	
};