#include <exception>
#include <iostream>
#include <string.h>
template <typename T>
class Array {
    private:
        T       *Arr;
        unsigned int     mSize;
    public:
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array<T> &other);
		Array<T>& operator=(const Array<T> &other);
		~Array<T>();
        class OutofRangeException : public std::exception {
            virtual const char* what() const throw();
        };
        unsigned int size() const;
        T &operator[] (int i);
};

template <typename T>
Array<T>::Array() {
	mSize = 0;
	Arr = NULL;
}

template <typename T>
Array<T>::Array(unsigned int n) : Arr(new T[n]) {
	mSize = n;
	//Arr = new T[size];
}

template <typename T>
Array<T>::Array(const Array<T> &other) {
	*this = other;
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> &other) {
	if (this != &other) {
		Arr = new T[other.size()];
		for (unsigned int i = 0; i < other.size(); i++) {
			Arr[i] = other.Arr[i];
		}
		mSize = other.size();
	}
	return (*this);
}

template <typename T>
Array<T>::~Array() {
	delete [] Arr;
}

template <typename T>
unsigned int Array<T>::size() const {
	return mSize;
}

template <typename T>
T &Array<T>::operator[] (int i){
	if (i < 0)
		throw Array::OutofRangeException();
	if ((unsigned int)i >= mSize)
		throw Array::OutofRangeException();
	return Arr[i];
}

template <typename T>
const char* Array<T>::OutofRangeException::what() const throw() {
	return "Index out of range";
 }
