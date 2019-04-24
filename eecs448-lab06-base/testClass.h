/**
*	@file testClass.cpp
*	@author Josh Vandeleuv
*	@date
*	@brief The testing suite for Lab 6
*/
#ifndef TESTCLASS_H
#define TESTCLASS_H

#include "LinkedListOfInts.h"

class testClass
{
public:
testClass(LinkedListOfInts);
void runTests();
void runTest_addFront();
void runTest_removeFront();
void runTest_addBack();

private:
LinkedListOfInts theList;

};

#endif
