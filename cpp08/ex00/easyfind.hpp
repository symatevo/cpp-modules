#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <iterator>
#include <exception>
#include <iostream>
template <typename T>
typename T::iterator easyfind(T &a, int i);
class NoMemberFoundException : public std::exception {
    virtual const char* what() const throw() {
        return "No such member";
    }
};
#include "easyfind.tpp"
#endif