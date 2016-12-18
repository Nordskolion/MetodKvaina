all: main.o
	clear
	g++ main.o
	rm *.o
main.o: ./main.cpp
	g++ -c -std=c++11	./main.cpp -o main.o