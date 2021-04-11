CC = gcc
CFLAGS = -g -Wall -Wextra -std=c11

default: Exercise9

Exercise9: Exercise9.o struct.o 
	$(CC) $(CFLAGS) -o Exercise9 Exercise9.o  struct.o -lm

Exercise9.o: Exercise9.c struct.h 
	$(CC) $(CFLAGS) -c Exercise9.c

struct.o: struct.c struct.h
	$(CC) $(CFLAGS) -c struct.c

clean:
	$(RM) Exercise9 *.o *~

