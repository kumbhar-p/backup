.PHONY : clean

VPATH = source object header
CC = gcc
SOURCE := $(shell ls ./source/)
OBJECT := $(SOURCE:%.c=%.o)
HDR := ./header

exe : $(OBJECT) 
	$(CC) -o $@ $^
	mv *.o ./object/

%.o : %.c headers.h 
	$(CC) -c $^  -I $(HDR) -Wall

clean : 
	rm exe ./object/*.o
