CFLAGS = -O
CC = gcc
LIBS = -lm -lgsl -lgslcblas

matriz:matriz.o leergml.o
	$(CC) $(CFLAGS) -o matriz matriz.o leergml.o $(LIBS)

matriz.o:matriz.c red.h leergml.h Makefile
	$(CC) $(CFLAGS) -c matriz.c

leergml.o:leergml.c leergml.h red.h
	$(CC) $(CFLAGS) -c leergml.c
