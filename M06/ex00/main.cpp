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
			return (1);
		}
	}
	return (0);
}


void	convertToChar(const char * arg)
{
	int 		len;
	std::string	temp;
	int			nbr;
	char		res;
	
	temp = arg;
	len = temp.length();
	if (len == 1 && ((arg[0] > 32 && arg[0] < 48) || (arg[0] > 57 && arg[0] < 127)))
		nbr	= (int) arg[0];
	else if (isNumber(arg, len))
	{
		std::cout << "char: impossible" << std::endl;
		return ;
	}
	else
		nbr = atoi(arg);	
	if (nbr > 31 && nbr < 127)
	{
		res = nbr;
		std::cout << "char: " << res << std::endl;
		return ;
	}
	else
		std::cout << "char: non displayable" << std::endl;
}

void	convertToInt(const char* arg)
{
	int			len;
	std::string	temp;
	int			res;

	temp = arg;
	len = temp.length();
	if (isNumber(arg, len))
	{
		std::cout << "int: impossible" << std::endl;
		return ;
	}
	res = atoi(arg);
	std::cout << "int: " << res << std::endl;
}

float	getFraction(const char *arg)
{
	float 	nbr;
	int		tmp;
	int 	i;
	int 	j;

	i = 0;
	nbr = 0.0f;
	while (arg[i] && arg[i] != '.')
		i++;
	i++;
	j = 0;
	tmp = 0;
	while (arg[i] && (arg[i]) >= '0' && arg[i] <= '9')
	{
		tmp = tmp * 10;
		tmp += arg[i] - 48;
		i++;
		j++;
	}
	i = 1;
	while (j--)
	 	i = i * 10;
	nbr = (float) tmp / (float)i;
	return (nbr);
}

int	isFloat(const char * arg)
{
	int		i;
	int		dec_point;
	int		flag_point;
	float	nbr;

	flag_point = 0;
	i = 0;
	dec_point = 0;
	if (arg[0] == '-' && arg[0] == '+')
		i++;
	while (arg[i])
	{
		if (arg[i] == '.')
			flag_point = 1;
		else if (flag_point && arg[i] != 'f')
			dec_point++;
		i++;
	}
	if (dec_point)
	{
		nbr = atoi(arg) + getFraction(arg);
		std::cout << "float: " << nbr << "f"<< std::endl;
	}
	return (dec_point);
}

void	convertToFloat(const char * arg)
{
	std::string	temp;
	int			len;

	temp = arg;
	len = temp.length();
	if (isNumber(arg, len))
	{
		std::cout << "float: imposible" << std::endl;
		return ;
	}
	if (isFloat(arg))
	{

		return ;
	}
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Invalide number of arguments" << std::endl;
		return (1);
	}
	convertToChar(av[1]);
	convertToInt(av[1]);
	convertToFloat(av[1]);
	return (0);
}
