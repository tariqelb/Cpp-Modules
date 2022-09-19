#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		unsigned int		maxSize;
		unsigned int		nElem;
		std::vector<int>	v;
	
	public:
		void			addNumber(int n);
		int			shortestSpan();
		int			longestSpan();
		void			addRange(std::vector<int> range);
		std::vector<int>&	getVector(void);
	
	Span(unsigned int n);
	Span(const Span& rhs);
	Span&	operator=(const Span& rhs);
	~Span();
};

#endif
