#pragma once
#include <iostream>
#include "nodeType.h"


template <typename T>
class linkedListType
{

protected:
	int count;

	nodeType <T> *first;

	nodeType <T> *last;

public:
	const linkedListType <T>& operator = (const linkedListType<T>& other)
	{
		copyList(other);
		return *this;
	}

	void initializeList()
	{

		first = nullptr;
		last = nullptr;
		count = 0;
	}
	bool isEmptyList() const
	{

		if (count == 0)
			return true;
		else
			return false;
	}
	void print() const
	{
		nodeType <T> *current = first;

		while (current != nullptr)
		{
			std::cout << current->info << std::endl;
			current->nextLink;
		}
		//std::cout << last << std::endl;
	}

	int length() const
	{

	}

	void destroyList()
	{

	}

	T front() const
	{

	}

	T back() const
	{

	}


	linkedListIterator <T> begin();

	linkedListIterator <T> end();

	linkedListType();

	linkedListType(const linkedListIterator<T>&);




private:
	void copyList(const linkedListType<T>&);

};

template<typename T>
const linkedListType<T>& linkedListType<T>::operator=(const linkedListType<T>&)
{

}

template<typename T>
void linkedListType<T>::initializeList()
{
}

template<typename T>
bool linkedListType<T>::isEmptyList() const
{
	return false;
}

template<typename T>
void linkedListType<T>::print() const
{
}

template<typename T>
int linkedListType<T>::length() const
{
	return 0;
}

template<typename T>
void linkedListType<T>::destroyList()
{
}

template<typename T>
T linkedListType<T>::front() const
{
	return T();
}

template<typename T>
T linkedListType<T>::back() const
{
	return T();
}

template<typename T>
linkedListIterator<T> linkedListType<T>::begin()
{
	return linkedListIterator<T>();
}

template<typename T>
linkedListIterator<T> linkedListType<T>::end()
{
	return linkedListIterator<T>();
}

template<typename T>
linkedListType<T>::linkedListType()
{
	initializeList();
}

template<typename T>
linkedListType<T>::linkedListType(const linkedListIterator<T>&)
{
}

template<typename T>
void linkedListType<T>::copyList(const linkedListType<T>& other)
{
	destroyList();
	nodeType <T> *temp = other.first;
	while (temp != nullptr)
	{
		insterLast(temp->info);

	}
}
