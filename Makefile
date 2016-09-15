target: Driver.o InOrder.o
	g++ Driver.o InOrder.o

Driver.o: Driver.cpp
	g++ -c Driver.cpp

InOrder.o: InOrder.cpp
	g++ -c InOrder.cpp
