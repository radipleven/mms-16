main.o:main.c comparators.h
	gcc -c main.c -o main.o
comparators.o: comparators.c
	gcc -c comparators.c -o comparators.o
program:main.o comparators.o
	gcc main.o comparators.o -o program
.PHONY: clean
clean:
	rm -rf *.o program