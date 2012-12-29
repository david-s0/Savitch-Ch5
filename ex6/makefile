mil2kil: main.o miles2kilFuncs.o kil2milesFuncs.o
	g++ -g -Wall main.o miles2kilFuncs.o kil2milesFuncs.o -o mil2kil

main.o: main.cpp miles2kilFuncs.hpp kil2milesFuncs.hpp
	g++ -g -Wall -c main.cpp

miles2kilFuncs.o: miles2kilFuncs.cpp
	g++ -g -Wall -c miles2kilFuncs.cpp

kil2milesFuncs.o: kil2milesFuncs.cpp
	g++ -g -Wall -c kil2milesFuncs.cpp