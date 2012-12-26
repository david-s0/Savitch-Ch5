puzzlers: main.o shootFuncs.o
	g++ -g -Wall main.o shootFuncs.o -o puzzlers

main.o: main.cpp shootFuncs.hpp
	g++ -g -Wall -c main.cpp

shootFuncs.o: shootFuncs.cpp shootFuncs.hpp
	g++ -g -Wall -c shootFuncs.cpp

clean: 
	rm *.o puzzlers