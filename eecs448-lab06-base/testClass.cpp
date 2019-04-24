/**
*	@file testClass.cpp
*	@author Josh Vandeleuv
*	@date
*	@brief The testing suite for Lab 6
*/
#include "testClass.h"


  testClass::testClass(LinkedListOfInts givenList)
  {
    theList = givenList;
  }
  void testClass::runTests()
  {
    std::cout<<"Running Tests!\n";
    std::cout<<".........................................\n";

    std::cout<<"Test 1: addFront\n";
    runTest_addFront();
    std::cout<<"Test 2: removeFront\n";
    runTest_removeFront();
    std::cout<<"Test 3: addBack\n";
    runTest_addBack();


    std::cout<<".........................................\n";
    std::cout<<"Tests Complete!\n";
  }

  void testClass::runTest_addFront()
  {
    for(unsigned int i = 0; i<10; i++)
    {
      theList.addFront(i);
    }
    std::vector<int> sourceVector = theList.toVector();
    std::vector<int> testVector = {9,8,7,6,5,4,3,2,1,0};
    if (testVector == sourceVector)
    {
      std::cout<<"Test successful!\n\n";
    }
    else
    {
      std::cout<<"Test failed!\n";
      std::cout<<"Test Vector: \n";
      for(unsigned int i=0; i<testVector.size();i++)
      {
        std::cout<<testVector.at(i)<<" ";
      }
      std::cout<<"\n";
      std::cout<<"Source Vector: \n";
      for(unsigned int i=0; i<sourceVector.size();i++)
      {
        std::cout<<sourceVector.at(i)<<" ";
      }
      std::cout<<"\n";
    }

  }
//----------------------------------------------------------------------
void testClass::runTest_removeFront()
{
  for(unsigned int i = 0; i<10; i++)
  {
    theList.removeFront();
  }
  std::vector<int> sourceVector = theList.toVector();
  std::vector<int> testVector = {};
  if (testVector == sourceVector)
  {
    std::cout<<"Test successful!\n\n";
  }
  else
  {
    std::cout<<"Test failed!\n";
    std::cout<<"Test Vector: \n";
    for(unsigned int i=0; i<testVector.size();i++)
    {
      std::cout<<testVector.at(i)<<" ";
    }
    std::cout<<"\n";
    std::cout<<"Source Vector: \n Empty\n:";
    std::cout<<"\n";
  }

}
//----------------------------------------------------------------------
  void testClass::runTest_addBack()
  {
    for(unsigned int i = 0; i<10; i++)
    {
      theList.addBack(i);
    }
    std::vector<int> sourceVector = theList.toVector();
    std::vector<int> testVector = {0,1,2,3,4,5,6,7,8,9};
    if (testVector == sourceVector)
    {
      std::cout<<"Test successful!\n\n";
    }
    else
    {
      std::cout<<"Test failed!\n";
      std::cout<<"Test Vector: \n";
      for(unsigned int i=0; i<testVector.size();i++)
      {
        std::cout<<testVector.at(i)<<" ";
      }
      std::cout<<"\n";
      std::cout<<"Source Vector: \n";
      for(unsigned int i=0; i<sourceVector.size();i++)
      {
        std::cout<<sourceVector.at(i)<<" ";
      }
      std::cout<<"\n";
    }

  }
