#include "Span.hpp"

int	main()
{
	Span s(3);
	
	std::vector<int>::iterator it;
	std::cout << s.v.size() << std::endl;
	std::cout << "La tankhdir in qilla tanssaha ghadan "
	<< "waja3o lkhotob ya2ti min mansiyiha" << std::endl;
	s.addNumber(16);
	s.addNumber(16);
	s.addNumber(27);
	s.addNumber(15);
	it = s.v.begin();
	std::cout << "--------- " << std::endl;
	while (it != s.v.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	std::cout << "--------- " << std::endl;
	std::cout << "Sort Span " << s.shortestSpan() << std::endl;
	std::cout << "--------- " << std::endl;
	std::cout << "Long Span " <<s.longestSpan() << std::endl;
	std::cout << "Tashefa jiraho nafssi in adehartaha"
	<< "wa lhawlo kolo lhawali fi makhefiyiha" << std::endl;
	std::vector<int> range(10, 1010);
	std::cout << "--------- " << std::endl;
	s.addRange(range);
	std::cout << "--------- " << std::endl;	
	it = s.v.begin();
	while (it != s.v.end())
	{
		std::cout << *it << " , ";
		it++;
	}
	std::cout << "--------- " << std::endl;
	return (0);
}
