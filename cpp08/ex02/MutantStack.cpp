# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &other)
{
    *this = other;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &other)
{
    *this = other;
    return *this;
}

template <typename T>
bool MutantStack<T>::empty(void)
{
    return _stack.empty();
}

template <typename T>
size_t MutantStack<T>::size(void)
{
    return _stack.size();
}

template <typename T>
T   &MutantStack<T>::top(void)
{
    return _stack.front();
}

template <typename T>
void   MutantStack<T>::push(T e)
{
    _stack.push_front(e);
}

template <typename T>
void   MutantStack<T>::pop(void)
{
    _stack.pop_front();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(void)
{
    return _stack.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(void)
{
    return _stack.end();
}