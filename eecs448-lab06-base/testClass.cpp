/**
*	@file testClass.cpp
*	@author Josh Vandeleuv
*	@date
*	@brief The testing suite for Lab 6
*/
#include "testClass.h"


  testClass::testClass()
  {

  }
  void testClass::runTests()
  {
    std::cout<<"Running Tests!\n";
    std::cout<<"Basic Function tests:\n";
    std::cout<<".........................................\n";

    std::cout<<"Test 1: addFront\n";
    runTest_addFront();
    std::cout<<"Test 2: isEmpty\n";
    runTest_isEmpty();
    std::cout<<"Test 3: addBack\n";
    runTest_addBack();
    std::cout<<"Test 4: removeFront\n";
    runTest_removeFront();
    std::cout<<"Test 5: removeBack\n";
    runTest_removeBack();
    std::cout<<"Test 6: size\n";
    runTest_size();
    std::cout<<"Test 7: search\n";
    runTest_search();

    std::cout<<".........................................\n";
    std::cout<<"Tests Complete!\n";
  }
//----------------------------------------------------------------------
  void testClass::runTest_addFront()
  {
    LinkedListOfInts testList;
    for(int i = 1; i<11; i++)
    {
      testList.addFront(i);
    }
    std::vector<int> sourceVector = testList.toVector();
    std::vector<int> testVector = {10,9,8,7,6,5,4,3,2,1};
    if (testVector == sourceVector)
    {
      std::cout<<"Test successful!\n\n";
    }
    else
    {
      std::cout<<"Test failed!\n";
      std::cout<<"Test Vector: \n";
      for(int i=0; i<testVector.size();i++)
      {
        std::cout<<testVector.at(i)<<" ";
      }
      std::cout<<"\n";
      std::cout<<"Source Vector: \n";
      for(int i=0; i<sourceVector.size();i++)
      {
        std::cout<<sourceVector.at(i)<<" ";
      }
      std::cout<<"\n";
    }
  }
//----------------------------------------------------------------------
  void testClass::runTest_isEmpty()
  {
    LinkedListOfInts testList;
    if(!testList.isEmpty())
    {
      std::cout<<"Test Failed!\n";
      std::cout<<"Empty list fails isEmpty\n\n";
    }
    else
    {
      std::cout<<"Empty list is given as empty\n";
      for(int i = 1; i<11; i++)
      {
        testList.addFront(i);
      }
      if(testList.isEmpty())
      {
        std::cout<<"Test Failed!\n";
        std::cout<<"Non-empty list is given as empty\n\n";
      }
      else
      {
        std::cout<<"Test Successful!\n\n";
      }
    }
  }
//----------------------------------------------------------------------
  void testClass::runTest_addBack()
  {
    LinkedListOfInts testList;
    for(int i = 1; i<11; i++)
    {
      testList.addFront(i);
    }
    std::vector<int> sourceVector = testList.toVector();
    std::vector<int> testVector = {1,2,3,4,5,6,7,8,9,10};
    if (testVector == sourceVector)
    {
      std::cout<<"Test successful!\n\n";
    }
    else
    {
      std::cout<<"Test failed!\n";
      std::cout<<"Test Vector: \n";
      for(int i=0; i<testVector.size();i++)
      {
        std::cout<<testVector.at(i)<<" ";
      }
      std::cout<<"\n";
      std::cout<<"Source Vector: \n";
      for(int i=0; i<sourceVector.size();i++)
      {
        std::cout<<sourceVector.at(i)<<" ";
      }
      std::cout<<"\n\n";
    }
  }
//----------------------------------------------------------------------
  void testClass::runTest_removeFront()
  {
    LinkedListOfInts testList;
    for(int i = 1; i<11; i++)
    {
      testList.addFront(i);
    }
    std::vector<int> sourceVector = testList.toVector();
    std::vector<int> testVector = {10,9,8,7,6,5,4,3,2,1};
    if (testVector == sourceVector)
    {
      std::cout<<"List successfully Created.\n";
      std::cout<<"Removing half the list:\n";
      bool successfulRemove = true;
      for(int i=0; i<5; i++)
      {
        successfulRemove = testList.removeFront();
        if(!successfulRemove)
        {
          std::cout<<"Failure to remove!  Removal number "<<i+1<<"\n";
          break;
        }
      }
      if(successfulRemove)
      {
        std::cout<<"List was successfully reduced!\n";
      }
      std::cout<<"Remaining list:\n";
      sourceVector = testList.toVector();
      for(int i=0; i<sourceVector.size();i++)
      {
        std::cout<<sourceVector.at(i)<<" ";
      }
      std::cout<<"\n\n";
    }
    else
    {
      std::cout<<"Error: list not created\n\n";
    }
  }
//----------------------------------------------------------------------
  void testClass::runTest_removeBack()
  {
    LinkedListOfInts testList;
    for(int i = 1; i<11; i++)
    {
      testList.addFront(i);
    }
    std::vector<int> sourceVector = testList.toVector();
    std::vector<int> testVector = {10,9,8,7,6,5,4,3,2,1};
    if (testVector == sourceVector)
    {
      std::cout<<"List successfully Created.\n";
      std::cout<<"Removing half the list:\n";
      bool successfulRemove = true;
      for(int i=0; i<5; i++)
      {
        successfulRemove = testList.removeBack();
        if(!successfulRemove)
        {
          std::cout<<"Failure to remove!  Removal number "<<i+1<<"\n";
          break;
        }
      }
      if(successfulRemove)
      {
        std::cout<<"List was successfully reduced!\n";
      }
      std::cout<<"Remaining list:\n";
      sourceVector = testList.toVector();
      for(int i=0; i<sourceVector.size();i++)
      {
        std::cout<<sourceVector.at(i)<<" ";
      }
      std::cout<<"\n\n";
    }
    else
    {
      std::cout<<"Error: list not created.\n\n";
    }
  }
//----------------------------------------------------------------------
void testClass::runTest_size()
{
  LinkedListOfInts testList;
  if(testList.size() == 0)
  {
    std::cout<<"Size is correct for an empty list\n";

    for(int i = 1; i<11; i++)
    {
      testList.addFront(i);
    }
    std::vector<int> sourceVector = testList.toVector();
    std::vector<int> testVector = {10,9,8,7,6,5,4,3,2,1};
    if(sourceVector==testVector)
    {
      if(testList.size() == 10)
      {
        std::cout<<"Size is correct for a list of 10.\n";
        std::cout<<"Test Successful!\n\n";
      }
      else
      {
        std::cout<<"Test failed:\n";
        std::cout<<"Real size: 10   Given size: "<<testList.size()<<"\n";
        std::cout<<"List contents: \n";
        sourceVector = testList.toVector();
        for(int i=0; i<sourceVector.size();i++)
        {
          std::cout<<sourceVector.at(i)<<" ";
        }
        std::cout<<"\n\n";
      }
    }
    else
    {
      std::cout<<"Error: list not created.\n\n";
    }
  }
  else
  {
    std::cout<<"Test failed. Empty list has a size other than 0\n\n";
  }
}
//----------------------------------------------------------------------
void testClass::runTest_search()
{
  LinkedListOfInts testList;
  for(int i = 1; i<11; i++)
  {
    testList.addFront(i);
  }
  std::vector<int> sourceVector = testList.toVector();
  std::vector<int> testVector = {10,9,8,7,6,5,4,3,2,1};
  if(sourceVector==testVector)
  {
    std::cout<<"Searching the List:\nFound numbers: ";
    bool isFound;
    for(int i = 1; i<11; i++)
    {
      isFound = testList.search(i);
      if(isFound)
      {
        std::cout<<i<<" ";
      }
      else
      {
        std::cout<<"*"<<i<<"*";
        break;
      }
    }
    if(!isFound)
    {
      std::cout<<"\nTest failed.  Valid number not found.";
    }
    else
    {
      isFound = testList.search(100);
      if(!isFound)
      {
        std::cout<<"\nSearch failed for number not in list.\n";
        std::cout<<"Test Successful!";
      }
      else
      {
        std::cout<<"\nTest failed.  Value of 100 was found but was not in list.";
      }
    }
    std::cout<<"\n\n";
  }
  else
  {
    std::cout<<"Error: list not created.\n\n";
  }
}
