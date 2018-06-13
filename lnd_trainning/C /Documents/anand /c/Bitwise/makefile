VPATH = ./header/:./obj/:./source2/
INCLUDE = -I ./header/
OBJECT = 10.o 11.o 12.o 13.o 14.o 15.o 16.o 17.o 18.o 19.o 1.o 2.o 3.o 4.o 5.o 6.o 7.o 8.o 9.o binary.o main1.o myatoi.o test.o

exe : $(OBJECT)
	  gcc -Wall $^ -o $@
	  mv *.o ./obj/
%.o : %.c
	 gcc -c ./source2/*.c $(INCLUDE)
clean:
	rm ./obj/*.o exe
