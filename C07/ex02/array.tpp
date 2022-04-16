//
// Created by tkondrac on 16.04.22.
//

#ifndef CPP_MODULES_ARRAY_TPP
#define CPP_MODULES_ARRAY_TPP

#include <cstring>

template<typename T>
class Array
{
private:

public:
	Array<T>();
	explicit Array<T>(int n);
	Array<T>(Array<T> const & arr);
	~Array<T>();

	Array<T> & operator=(const Array<T> &right);
	T &operator[](int index) const;

	size_t	size() const;

private:
	size_t _size;
	T *tab;
};

template<typename T>
Array<T>::Array(): _size(0)
{
	tab = new T[0];
}

template<typename T>
Array<T>::Array(int n): _size(n)
{
	tab = new T[n];
	std::memset(tab, 0, sizeof(T) * n);
}

template<typename T>
Array<T>::Array(const Array<T> &arr): _size(0)
{
	tab = new T[0];
	*this = arr;
}

template<typename T>
Array<T>::~Array()
{
	delete[] tab;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &right)
{
	T *temp = new T[right._size];

	std::memcpy(temp, right.tab, sizeof(T) * right._size);
	delete[] this->tab;
	this->_size = right._size;
	this->tab = temp;
	return *this;
}

template<typename T>
T &Array<T>::operator[](int index) const{
	if (index >= (int)_size)
		throw std::exception();
	return tab[index];
}

template<typename T>
size_t Array<T>::size() const
{
	return _size;
}

#endif //CPP_MODULES_ARRAY_TPP
