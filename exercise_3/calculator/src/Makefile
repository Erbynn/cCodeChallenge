CPP= g++
CPPFLAGS = -g -Wall
OBJS=main.o arithmetic.o
all: main

arithmetic.o: arithmetic.cpp arithmetic.h

main: $(OBJS)
	$(CPP) -o main $(OBJS)

clean:
	rm -f *~ *.o main arithmetic

run:
	./main
