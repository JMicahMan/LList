#pragma once
#include <iostream>
#include "nodeType.h"
#include "LlistIterator.h"


template <typename T>
class linkedListType
{

protected:
	int count;

	nodeType <T> *first;

	nodeType <T> *last;

public:
	const linkedListType<T>& operator = (const linkedListType<T>& other);

	void initializeList();

	bool isEmptyList() const;

	void print() const;

	int length() const;
	
	virtual bool search(const T&)const = 0;
	virtual void insertFirst(const T&) = 0;
	virtual void insertLast(const T&) = 0;
	virtual void deleteNode(const T&) = 0;

	void destroyList();
	
	T front() const;

	T back() const;


	linkedListIterator<T> begin();

	linkedListIterator<T> end();

	linkedListType();

	linkedListType(const linkedListIterator<T>&);




private:
	void copyList(const linkedListType<T>&);

};

template<typename T>
const linkedListType<T>& linkedListType<T>::operator=(const linkedListType<T>& other)
{
	copyList(other);
	return *this;
}

template<typename T>
void linkedListType<T>::initializeList()
{
	first = nullptr;
	last = nullptr;
	count = 0;
}


template<typename T>
bool linkedListType<T>::isEmptyList() const
{

	if (count == 0)
		return true;
	else
		return false;
}

template<typename T>
void linkedListType<T>::print() const
{
	nodeType <T> *current = first;
	while (current != last->nextLink)
	{
		std::cout << current->info << std::endl;
		current = current->nextLink;
	}
}

template<typename T>
int linkedListType<T>::length() const
{
	return count;
}


template<typename T>
void linkedListType<T>::destroyList()
{
	if (isEmptyList() == false)
	{
		for (int i = 0; i<count; i++)
		{
			deleteNode(first->info);
		}
	}
}

template<typename T>
T linkedListType<T>::front() const
{
	return first->info;
}

template<typename T>
T linkedListType<T>::back() const
{
	return last->info;
}

template<typename T>
linkedListIterator<T> linkedListType<T>::begin()
{
	return linkedListIterator<T>(first);
}

template<typename T>
linkedListIterator<T> linkedListType<T>::end()
{
	return linkedListIterator<T>(last);
}

template<typename T>
linkedListType<T>::linkedListType()
{
	initializeList();
}

template<typename T>
linkedListType<T>::linkedListType(const linkedListIterator<T>& other)
{
	initializeList();
	copyList(other);
}

template<typename T>
void linkedListType<T>::copyList(const linkedListType<T>& other)
{
	destroyList();
	nodeType <T> *temp = other.first;
	while (temp != other.last->nextLink)
	{
		insertLast(temp->info);
		temp = temp->nextLink;
	}
}
