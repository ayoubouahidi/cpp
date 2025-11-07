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
				// if (av[j][i] >= 97 && av[j][i] <= 122)
				// {
				// 	// std::cout << char(av[j][i] - 32) << std::flush;
				// }
				// else
				// {
				// 	// std::cout << char(av[j][i]) << std::flush;
				// }

				i++;
			}
			j++;
		}
		std::cout << "\n" << std::flush ;
	}
	else 
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl ;
		av++;
	}
}

// +namespace