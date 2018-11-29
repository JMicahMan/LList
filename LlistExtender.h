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
bool linkedListExtender<Type>::search(const Type & other) const
{
	nodeType<Type> *temp = this->first;

	while (temp != this->last && temp->info != other)
	{
		temp = temp->nextLink;
		if (temp->info == other)
		{
			return true;
		}
		
	}
		return false;
}

template<class Type>
void linkedListExtender<Type>::insertFirst(const Type & other)
{
	if (this->isEmptyList() == true)
	{
		nodeType<Type> *temp = nullptr;
		temp = new nodeType<Type>;
		temp->info = other;
		this->first = temp;
		this->last = temp;
		this->count++;
	}
	
	else
	{
		nodeType<Type> *temp = nullptr;
		temp = new nodeType<Type>;
		temp->info = other;
		temp->nextLink = this->first;
		this->first = temp;
		this->count++;
	}
}

template<class Type>
void linkedListExtender<Type>::insertLast(const Type & other)
{
	if (this->isEmptyList() == true)
	{
		nodeType<Type> *temp = nullptr;
		temp = new nodeType<Type>;
		temp->info = other;
		this->first = temp;
		this->last = temp;
		this->count++;
	}

	else
	{
		nodeType<Type> *temp = nullptr;
		temp = new nodeType<Type>;
		temp->info = other;
		this->last -> nextLink = temp;
		this->last = temp;
		this->count++;
	}

}

template<class Type>
 void linkedListExtender<Type>::deleteNode(const Type & other)
{

	 nodeType<Type> *temp = this->first;
	 nodeType<Type> *parent = this->first;
	 
	 if (this->first->info == other)
	 {
		 this->first = temp->nextLink;
		 delete temp;
	 }

	 else if (this->last->info == other)
	 {
		 while (temp != this->last)
		 {
			 parent = temp;
			 temp = temp->nextLink;
		 }

		 this->last = parent;
		 delete temp;
	 }
	 else
	 {
		 while (temp != this->last && temp->info != other)
		 {
			 parent = temp;
			 temp = temp->nextLink;
			 if (temp->info == other)
			 {
				 parent->nextLink = temp->nextLink;

				 delete temp;
				 return;
			 }

		 }
	 }
}
