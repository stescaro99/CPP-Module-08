#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		unsigned int _n;
		std::vector<int> _vec;

	public:
		Span();
		Span(unsigned int n);
		Span(const Span &span);
		~Span();
		Span &operator=(const Span &span);

		void addNumber(int number);
		
		template <typename InputIterator>
		void addNumber(InputIterator begin, InputIterator end)
		{
			while (begin != end)
			{
				addNumber(*begin);
				begin++;
			}
		}

		int shortestSpan();
		int longestSpan();
		
		class NoSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "No span to find";
				}
		};
		class FullSpanException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Span is full";
				}
		};
};

#endif