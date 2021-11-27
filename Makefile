Operation.o: Operation.cpp Operation.h FileIO.h
	g++ -c Operation.cpp
FileIO.o: FileIO.cpp FileIO.h Operation.h
	g++ -c FileIO.cpp
Snake.o: Snake.cpp Operation.h FileIO.h
	g++ -c Snake.cpp
Snake: Snake.o FileIO.o Operation.o
	g++ Snake.o FileIO.o Operation.o -o Snake
clean:
	rm Snake.o FileIO.o Operation.o Snake
.PHONY:clean
