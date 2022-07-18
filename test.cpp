#include <iostream>
//#include <math>

/*std::ostream &operator<<(std::ostream& out, const int& fd)
{
	out << fd;
	return out;
}*/

int	main(void)
{
	int bits = 8;
	float mm = 13.765;
	//const float a = mm / ((float) (1 << bits));
	//const int b = (int) (a * ((float) (1 << bits)));


	float a = mm / ((float) (1 <<  bits));
	int b = (int) (a * ((float) (1 <<  bits))) ;
	

	std::cout << "the result is : " << b << "\n";
	return (0);
}
