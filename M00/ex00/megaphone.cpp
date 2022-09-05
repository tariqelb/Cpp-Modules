/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-bouh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:43:15 by tel-bouh          #+#    #+#             */
/*   Updated: 2022/08/14 16:27:58 by tel-bouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    int i;
    int j;
	int	len;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        j = 1;
        while (j < argc)
        {
            i = 0;
			len = strlen(argv[j]);
            while (i < len)
            {
                std::cout << (char) toupper(argv[j][i]);
                i++;
            }
            j++;
        }
        std::cout << std::endl;
    }
    return (0);
}
