#include <iostream>
// namespace ab
int	main(int ac, char **av)
{
	int i;
	int j;

	j = 1;
	if (ac >= 2)
	{
		while (av[j])
		{	
			i = 0;
			while (av[j][i])
			{
				std::cout << char(std::toupper(av[j][i])) << std::flush; 
				i++;
			}
			j++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	 std::cout << std::endl ;
}

// +namespace