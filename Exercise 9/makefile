CC = gcc
CFLAGS = -Wall -Wextra -std=c11

default: Exercise

Exercise: Exercise.o Game.o population.o TicTakToe.o 
	$(CC) $(CFLAGS) -o Exercise Exercise.o Game.o population.o TicTakToe.o -lm

Exercise.o: Exercise.c Game.h population.h TicTakToe.h 
	$(CC) $(CFLAGS) -c Exercise.c

Game.o: Game.c Game.h
	$(CC) $(CFLAGS) -c Game.c

population.o: population.c population.h
	$(CC) $(CFLAGS) -c population.c

TicTakToe.o: TicTakToe.c TicTakToe.h
	$(CC) $(CFLAGS) -c TicTakToe.c

clean:
	$(RM) Exercise *.o *~
