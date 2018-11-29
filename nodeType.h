#pragma once
#include <iostream>

template <typename T>
struct nodeType
{
	T info;
	nodeType <T> *nextLink;
};