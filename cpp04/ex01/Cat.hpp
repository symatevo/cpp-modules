#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
    private:
        Brain* i; 
    public:
        Cat();
        Cat(Cat &other);
        Cat &operator= (Cat &other);
        ~Cat();
        virtual void makeSound() const;
} ;

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(WrongCat &other);
        WrongCat &operator= (WrongCat &other);
        ~WrongCat();
        void makeSound() const;
} ;

#endif
