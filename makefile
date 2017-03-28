# Makefile #

CC=gcc
CFLAGS=-c

prog: mod1.o mod2.o mod3.o
	$(CC) -o prog mod1.o mod2.o mod3.o

mod1.o: mod1.c
	$(CC) $(CFLAGS) mod1.c

mod2.o: mod2.c inc1.h
	$(CC) $(CFLAGS) mod2.c

mod3.o: inc1.h mod3.c inc2.h
	$(CC) $(CFLAGS) mod3.c

