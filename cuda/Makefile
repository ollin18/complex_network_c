CFLAGS = -O
CC = nvcc
LIBS = -lm -lgsl -lgslcblas

NBM:NBM.o leergml.o
	$(CC) $(CFLAGS) -o NBM NBM.o leergml.o $(LIBS)

NBM.o:NBM.cu red.h leergml.h Makefile
	$(CC) $(CFLAGS) -c NBM.cu

leergml.o:leergml.c leergml.h red.h
	$(CC) $(CFLAGS) -c leergml.c
