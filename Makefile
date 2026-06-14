test: main.o sorting.o piratas.o
	gcc main.o sorting.o piratas.o -o test
main.o: main.c sorting.h
	gcc -c main.c
sorting.o: sorting.c sorting.h
	gcc -c sorting.c
piratas.o: piratas.c sorting.h
	gcc -c piratas.c
