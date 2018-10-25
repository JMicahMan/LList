#pragma once
#include "linkedList.h"


template <class Type>
class linkedListExtender : public linkedListType<Type>
{
public:
	bool search(const Type&) const override;
	void insertFirst(const Type&) override;
	void insertLast(const Type&) override;
	void deleteNode(const Type&) override;
};

template<class Type>
bool linkedListExtender<Type>::search(const Type &) const
{
	return false;
}

template<class Type>
void linkedListExtender<Type>::insertFirst(const Type &)
{
}

template<class Type>
void linkedListExtender<Type>::insertLast(const Type &)
{
}

template<class Type>
 void linkedListExtender<Type>::deleteNode(const Type &)
{
}
