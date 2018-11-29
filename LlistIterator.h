#pragma once
#include "nodeType.h"

template <typename T>
class linkedListIterator
{
private:
	nodeType <T> *current;

public:
	linkedListIterator();

	linkedListIterator(nodeType<T>*);

	T operator*();

	linkedListIterator<T> operator++();

	bool operator==(const linkedListIterator<T>&) const;

	bool operator!=(const linkedListIterator<T>&) const;

};

template<typename T>
linkedListIterator<T>::linkedListIterator()
{
	current = nullptr;
}

template<typename T>
linkedListIterator<T>::linkedListIterator(nodeType<T>* node)
{
	current = node;
}

template<typename T>
T linkedListIterator<T>::operator*()
{
	return this->current->info;
}

template<typename T>
linkedListIterator<T> linkedListIterator<T>::operator++()
{
	this->current = this->current->nextLink;
	return *this;
}

template<typename T>
bool linkedListIterator<T>::operator==(const linkedListIterator<T>& other) const
{
	return this->current == other.current;
}

template<typename T>
bool linkedListIterator<T>::operator!=(const linkedListIterator<T>& other) const
{
	return this->current != other.current;

}
