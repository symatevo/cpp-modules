#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>
int main() {
    std::vector<int> v;
    v.push_back(24);
    v.push_back(10);
    v.push_back(8);
    std::vector<int>::iterator p;
    try {
        p = easyfind(v, 24);
        std::cout << *p << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::deque<int> gquiz;
    gquiz.push_back(10);
    gquiz.push_front(20);
    gquiz.push_back(30);
    std::deque<int>::iterator it;
    try {
        it = easyfind(gquiz, 20);
        std::cout << *it << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    std::list<int> l;
    l.push_back(10);
    l.push_front(2);
    l.push_back(3);
    std::list<int>::iterator lt;
    try {
        lt = easyfind(l, 2);
        std::cout << *it << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}