#include "Span.hpp"

Span::Span(unsigned int N)
{
	maxSize = N;
	nElem = 0;
}

Span::Span(const Span& rhs)
{
	*this = rhs;
}

Span&	Span::operator=(const Span& rhs)
{
	unsigned int i;

	if (this != &rhs)
	{
		i = 0;
		while (i < rhs.v.size())
		{
			this->v[i] = rhs.v[i];
			i++;
		}
	}
	return (*this);
}

Span::~Span()
{}

void	Span::addNumber(int n)
{
	try
	{
		if (this->nElem < this->maxSize)
		{
			this->v.push_back(n);
			nElem++;
		}
		else
			throw(std::exception());
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	Span::shortestSpan(void)
{
	std::vector<int>	s;

	if (this->v.size() > 2)
	{
		s = this->v;
		sort(s.begin(), s.end());
		return (s[1] - s[0]);
	}
	else
		throw(std::exception());
}

int	Span::longestSpan(void)
{
	int				min;
	int				max;

	if (this->v.size() > 2)
	{
		min = *min_element(v.begin(), v.end());
		max = *max_element(v.begin(), v.end());
		return (max - min);
	}
	else
		throw(std::exception());
}

void	Span::addRange(std::vector<int> range)
{
	if (range.size() != 0)
	{
		this->v.insert(this->v.end(), range.begin() , range.end());
	}
}

std::vector<int>&	Span::getVector(void)
{
	return (this->v);
}	
