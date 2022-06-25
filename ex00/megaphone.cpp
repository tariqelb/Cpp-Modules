#include <iostream>
int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    else
    {
        j = 1;
        while (j < argc)
        {
            i = 0;
            while (argv[j][i])
            {
                std::cout << (char) toupper(argv[j][i]);
                i++;
            }
            j++;
        }
        std::cout << "\n";
    return (0);
    }
}