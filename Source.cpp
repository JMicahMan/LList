#include "LlistExtender.h"
#include "LlistIterator.h"





int main()
{

	linkedListExtender<int> testList;

	// expected first 10, nextLink 19, nextLink 15, nextLink 11, nextLink 7
	testList.insertFirst(7);
	testList.insertFirst(11);
	testList.insertFirst(15);
	testList.insertFirst(19);
	testList.insertFirst(10);

	// resualts first 10, nextLink 19, nextLink 15, nextLink 11, nextLink 7


	// expected first 10, nextLink 19, nextLink 15, nextLink 11, nextLink 7, nextLink 14
	testList.insertLast(14);

	// resualt first 10, nextLink 19, nextLink 15, nextLink 11, nextLink 7, nextLink 14

	// expected deletes 15 and list remains readable

	testList.deleteNode(15);
	
	// resualt deletes 15 and list remains readable

	// expected search finds 11 and returns true

	testList.search(11);

	// resualt search finds 11 and returns true




	//expected create a new list with the same values as the assined list


	linkedListExtender<int> testList2;


	testList2 = testList;

	//resualt create a new list with the same values as the assined list

	//expected print 10, 19, 11, 7, and 14 to console

	testList2.print();

	//resualt print 10, 19, 11, 7, and 14 to console


	//expecded will return the length of the list

	testList2.length();

	//resualt will return the length of the list

	//expected destroy testList2

	//testList2.destroyList();

	//resualt destroy testList2

	//expected return first

	testList2.front();

	//resualt return first

	//expected return last

	testList2.back();

	//resualt return last

	//expected return the iterator pointing to first

	testList2.begin();

	//resualt return the iterator pointing to first

	//expected return the iterator pointing to last

	testList2.end();

	//resualt return the iterator pointing to last

	//expected return the info inside current

	linkedListIterator<int> testIterator = testList2.begin();

	*testIterator;

	//resualt return the info inside current

	//expected move current over to next node

	++testIterator;

	//resualt move current over to next node

	//expect return false
	linkedListIterator<int> testIterator2 = testList2.begin();

	testIterator == testIterator2;

	//resualt return false

	//expect return true

	testIterator != testIterator2;

	//resualt return true

	system("pause");
	return 0;
}