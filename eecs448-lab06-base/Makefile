#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o testClass.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o testClass.o -o prog


main.o: main.cpp
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed Test.o recipe and compiler command
testClass.o: testClass.cpp testClass.h
	g++ -g -Wall -std=c++11 -c testClass.cpp


#DON'T delete LinkedList.o!
clean:
	rm main.o testClass.o *.*~ prog
