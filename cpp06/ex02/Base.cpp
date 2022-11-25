#include "Base.hpp"

Base *generate(void) {
    B b;
    Base *all[3] = {new A(), new B(), new C()};
    int randNum = (rand() % 3);
    return all[randNum];
}

void identify(Base *p) {
	A *a = dynamic_cast<A *> (p);
	B *b = dynamic_cast<B *> (p);
	C *c = dynamic_cast<C *> (p);
    
	if (a)
		std::cout << "with Pointer: Type is \"A\"" << std::endl;
	else if (b)
		std::cout << "with Pointer: Type is \"B\"" << std::endl;
	else if (c)
		std::cout << "with Pointer: Type is \"C\"" << std::endl;
	else
		std::cout << "with Pointer: ankap es" << std::endl;
}

void identify(Base &p) {
    try {
        A a;
        a = dynamic_cast<A &> (p);
        std::cout << "with Reference: Type is \"A\"" << std::endl;
    }
    catch (std::exception &e) {
        try {
            B b;
            b = dynamic_cast<B &> (p);
            std::cout << "with Reference: Type is \"B\"" << std::endl;
        }
        catch (std::exception &e) {
            try {
                C c;
                c = dynamic_cast<C &> (p);
                std::cout << "with Reference: Type is \"C\"" << std::endl;
            }
            catch (std::exception &e) {
            	std::cout << "with Reference: ankap es" << std::endl;
            }
        }
    }
}