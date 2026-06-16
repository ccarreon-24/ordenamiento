test: main.o treasure.o sorting.o
	gcc main.o treasure.o sorting.o -o test
main.o: main.c sorting.h
	gcc -c main.c
treasure.o: treasure.c sorting.h
	gcc -c treasure.c
sorting.o: sorting.c sorting.h
	gcc -c sorting.c
