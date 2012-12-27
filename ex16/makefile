year: main.o yearFuncs.o
	g++ -g -Wall main.o yearFuncs.o -o year

main.o: main.cpp yearFuncs.hpp
	g++ -c -g -Wall main.cpp

yearFuncs.o: yearFuncs.cpp yearFuncs.hpp
	g++ -c -g -Wall yearFuncs.cpp

clean:
	rm *.o year
