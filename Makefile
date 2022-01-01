main: main.o
	g++ -std=c++11 -o main main.o

tests: tests.o
	g++ -std=c++11 -o tests tests.o

main.o: main.cpp MyVector.h MyVector.cxx
	g++ -std=c++11 -c main.cpp

tests.o: tests.cpp MyVector.h MyVector.cxx
	g++ -std=c++11 -c tests.cpp

clean:
	rm *.o main tests
