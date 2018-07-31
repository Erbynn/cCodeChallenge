CFLAGS=-g -Wall
all: hello

hello.s: hello.c
	gcc -S $(CFLAGS) hello.c

hello.o: hello.s
	gcc -c $(CFLAGS) hello.s

hello:	hello.o
	gcc -o hello hello.o
clean:
	rm -f *~ hello.s hello.o hello
run:
	./hello
