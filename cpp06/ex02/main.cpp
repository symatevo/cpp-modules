#include "Base.hpp"

int main() {
    srand(time(0));

    Base *a = generate();
    identify(a);
    identify(*a);
}