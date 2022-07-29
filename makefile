output: main.o myRootclass.o 
	g++ main.o myRootclass.o -o myRootclass

main.o: main.cpp
	g++ -c main.cpp

myRootclass.o: myRootclass.cpp myRootclass.hpp main.o
	g++ -c myRootclass.cpp

clean:
	rm *.o myRootclass