

default: main

funcoes.o : funcoes.h funcoes.cpp
	g++ -c funcoes.cpp -o funcoes.o
	
main: funcoes.o main.cpp
	g++ funcoes.o main.cpp -o main