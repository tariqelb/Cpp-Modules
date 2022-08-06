#include <iostream>
#include <string>

int	isNumber(std::string arg, int len)
{
	int i;
	int decimal;

	decimal = 0;
	i = 0;
	if (i == 0 && (arg[i] == '-' || arg[i] == '+'))
		i++;
	while (i < len)
	{
		std::cout << arg[i] << "  " << isdigit(arg[i]) << std::endl;  
		if (i == len - 1 && arg[i] == 'f')
			return (0);
		if (isdigit(arg[i]))
			i++;
		else if (decimal == 0 && arg[i] == '.')
		{
			decimal = 1;
			i++;
		}
		else if (decimal == 0 && arg[i] == '.' && i > 0 && isdigit(i - 1))
			i++;
		else
		{
			std::cout << arg[i] << std::endl;
			return (1);
		}
	}
	return (0);
}


void	convertToChar(const char * arg)
{
	int 		len;
	std::string	temp;
	char		res;
	
	temp = arg;
	len = temp.length();
	if (isNumber(arg, len))
		std::cout << "char: impossible" << std::endl;
	res = atoi(arg);
	std::cout  << "num  = " << (int) res << std::endl;
	if (res > 31 && res < 127)
	{
		std::cout << "char: " << res << std::endl;
	}
	else
		std::cout << "char: non displlayable" << std::endl;
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalide number of arguments" << std::endl;
		return (1);
	}
	convertToChar(av[1]);
	//float a = -.f;
	//std::cout << a << std::endl;
	return (0);
}
