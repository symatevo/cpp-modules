#include "Span.hpp"

int main() {
	// normal test
	try {
		Span s(5);
		s.addNumber(2);
		s.addNumber(4);
		s.addNumber(6);
		s.addNumber(8);
		s.addNumber(10);
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// already full exception
	try {
		Span s(5);
		s.addNumber(2);
		s.addNumber(4);
		s.addNumber(6);
		s.addNumber(8);
		s.addNumber(10);
		s.addNumber(12);
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// too small exception
	try {
		Span s(5);
		s.addNumber(2);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}
	try {
		Span s(1);
		//s.addNumber(2);
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// bigger span
	try {
		Span s(10000);
		s.addRange(1, 2000, 4);
        s.addRange(2001, 10000, 10);
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	return 0;
}