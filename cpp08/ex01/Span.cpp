#include "Span.hpp"

Span::Span() {
    //std::cout << "default constructor called" << std::endl;
    size = 0;
    counter = 0;
}

Span::Span(unsigned int n){
    //std::cout << "const with param called" << std::endl;
    size = n;
    counter = 0;
}

Span::Span(const Span &other) {
    //std::cout << "copy constructor called" << std::endl;
    *this = other;
}

Span &Span::operator=(const Span &other) {
    if (this != &other) {
        this->size = other.getsize();
        this->v = other.getv();
        this->counter = other.getcounter();
    }
    return *this;
}
Span::~Span() {
    //std::cout << "destructor called" << std::endl;
}

unsigned int Span::getsize(void) const {
    return size;
}

std::vector<int> Span::getv(void) const {
    return v;
}

unsigned int Span::getcounter(void) const {
    return counter;
}

void Span::addNumber(int number) {
    counter++;
    if (counter > size)
        throw Span::AlreadyFilledException();
    v.push_back(number);
}

int Span::shortestSpan() {
    if (v.size() == 0 || v.size() == 1)
        throw Span::SpanCantBeFound();
    std::sort(v.begin(), v.end());
    int ret = (*(v.begin() + 1)) - *(v.begin());
    for (std::vector<int>::iterator t = v.begin(); t != v.end() - 1; t++) {
        if (*(t + 1) - *t < ret) {
            ret = *(t + 1) - *t;
        }
    }
    return ret;
}

int Span::longestSpan() {
    if (v.size() == 0 || v.size() == 1)
        throw Span::SpanCantBeFound();
    int min = *std::min_element(v.begin(), v.end());
    int max = *std::max_element(v.begin(), v.end());
    return (max - min);
}

void Span::addRange(unsigned int from, unsigned int to, int value) {
	if (to > size)
		throw std::exception();
	if (from <= v.size() && v.size() != 0)
		throw std::exception();
    v.resize(to);
	std::vector<int>::iterator	it = this->v.begin() + from;
	std::fill(it - 1, it + (to - from), value);
}