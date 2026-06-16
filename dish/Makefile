test: main.o sorting.o baratie.o
	gcc main.o sorting.o baratie.o -o test
main.o: main.c sorting.h
	gcc -c main.c
sorting.o: sorting.c sorting.h
	gcc -c sorting.c
baratie.o: baratie.c sorting.h
	gcc -c baratie.c

