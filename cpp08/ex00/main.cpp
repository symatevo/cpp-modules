#include "easyfind.hpp"
#include <vector>
int main() {
    int a[ 10 ] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
    std::vector<int> v(a, a+1);
    try {
     easyfind(v, 10);
    }
    catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}