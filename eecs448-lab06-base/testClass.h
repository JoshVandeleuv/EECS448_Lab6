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
testClass();
void runTests();
void runTest_addFront();
void runTest_isEmpty();
void runTest_addBack();
void runTest_removeFront();
void runTest_removeBack();
void runTest_size();
void runTest_search();
void runTest_negative();
void runTest_largeNumbers();
void runTest_mixedAdds();

};

#endif
