all::project3

project3: main.cpp Money.o
	g++ -o project3 main.cpp Money.o

Money.o::Money.cpp Money.h 
	g++ -c Money.cpp


clean::
	rm *.o 