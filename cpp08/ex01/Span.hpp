#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
    private:
        unsigned int size;
        std::vector<int> v;
        unsigned int counter;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &other);
        Span &operator=(const Span &other);
        ~Span();
        unsigned int getsize(void) const;
        unsigned int getcounter(void) const;
        std::vector<int> getv(void) const;
        void addNumber(int number);
        int shortestSpan();
        int longestSpan();
        class SpanCantBeFound : public std::exception {
            const char * what() const throw() {
                return "Span cant be found";
            }
        } ;
        class AlreadyFilledException : public std::exception {
            const char * what() const throw() {
                return "Already filled";
            }
        } ;
        class WrongArgumentException : public std::exception {
            const char * what() const throw() {
                return "Wrong Argument";
            }
        } ;
        void addRange(unsigned int from, unsigned int to, int value);
} ;

#endif