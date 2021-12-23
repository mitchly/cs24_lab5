#makefile
CXX_FLAG = --std=c++11 -g

all: evalfull usestack

evalfull: evalfull.o
	g++ $(CXX_FLAG) -o evalfull evalfull.o

usestack: usestack.o
	g++ $(CXX_FLAG) -o usestack usestack.o

evalfull.o: evalfull.cpp
	g++ -c $(CXX_FLAG) evalfull.cpp

usestack.o: usestack.cpp
	g++ -c $(CXX_FLAG) usestack.cpp

clean:
	rm -f main testcards *.o