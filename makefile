all: main.o function.o
	clear
	g++ main.o function.o
	rm *.o
main.o: ./main.cpp
	g++ -c -std=c++11	./main.cpp -o main.o

function.o: ./function.cpp
	g++ -c -std=c++11 ./function.cpp -o function.o