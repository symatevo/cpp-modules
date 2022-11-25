#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

template <typename T>
class MutantStack: public std::stack<T>
{
    private:
        std::list<T> _stack;
    public:
        MutantStack(void);
        MutantStack(MutantStack const &other);
        ~MutantStack(void);

        MutantStack &operator=(MutantStack const &other);
        bool    empty(void);
        size_t  size(void);
        T       &top(void);
        void    push(T e);
        void    pop(void);

        typedef typename std::list<T>::iterator iterator;

        iterator begin(void);
        iterator end(void);
};

#endif