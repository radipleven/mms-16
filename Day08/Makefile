.PHONY:all
all: program

main.o:main.c hello.h
	gcc -c main.c -o main.o
hello.o: hello.c
	gcc -c hello.c -o hello.o
program:main.o hello.o
	gcc main.o hello.o -o program
.PHONY: clean
clean:
	rm -rf *.o program