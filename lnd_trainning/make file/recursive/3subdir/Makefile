
VPATH = ./object:./source
INCLUDE = ./header
CFLAG = -Wall
OBJECTS = main.o enternum.o enterdpos.o enterspos.o atoi.o strlen.o bit_swap.o

BIT_SWAP: $(OBJECTS)
	cc -o $@ $^ 
	mv *.o ./object

%.o: %.c
	cc $(CFLAG) -c $^ -I $(INCLUDE)


clean:
	rm  ./object/*.o
	rm BIT_SWAP

