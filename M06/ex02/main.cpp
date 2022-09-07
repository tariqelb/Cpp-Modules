#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{
	Base* base = generate();
	Base& baseref = *base; 
	identify(base);
	identify(baseref);
	return (0);
}
