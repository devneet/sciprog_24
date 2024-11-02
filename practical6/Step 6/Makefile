CC=gcc # C Compiler
CCFLAGS = -O3
LDFLAGS = -lm

all: MatrixMultiplication 

MatrixMultiplication: main.o mm.o
	$(CC) -o $@ $^ $(LDFLAGS)

mm.o: mm.c
	$(CC) -c $(CCFLAGS) $<

main.o: main.c
	$(CC) -c $(CCFLAGS) $<


clean:
	rm *.o *.exe