#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iterator>
#include <exception>
#include <iostream>
template <typename T>
void easyfind(T &a, int i);
class NoMemberFoundException : public std::exception {
    virtual const char* what() const throw() {
        return "No such as member";
    }
};
#include "easyfind.tpp"
#endif